import os
import openai
import json
goalFl = open("data.ndf", "raw")
inPrompt="List of 100 Different Baby Names Starting with A:\nBenjamin\nAustin\nAdam\nJonathan"
openai.api_key = os.getenv("OPENAI_API_KEY")
def responseMake(x):
  response = openai.Completion.create(
    engine="text-davinci-002",
    prompt=x,
    temperature=1,
    max_tokens=823,
    top_p=0,
    best_of=1,
    frequency_penalty=2,
    presence_penalty=0
  )
  return response["choices"][0]["text"]
i = 8
while i > 0:
  inPrompt = inPrompt + responseMake(inPrompt)
  i -= 1
#print(response["choices"][0]["text"])
goalFl.write(inPrompt)
print(inPrompt)
