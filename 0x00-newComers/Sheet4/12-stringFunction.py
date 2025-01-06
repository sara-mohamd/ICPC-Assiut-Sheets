lnth = int(input())
testCases = int(input())
word = input()
if len(word) != lnth:
  raise ValueError(f"The length of the word should not be {lnth} characters!")

while testCases :
  stmt = input()
  parts = stmt.split(" ")
  if parts[0] == 'front':
    print()
  if parts[0] == 'back':
    pass
  if parts[0] == 'sort':
    pass
  if parts[0] == 'reverse':
    pass
  if parts[0] == '':
    pass
  if (parts[0] == 'push_back'):
    word += parts[1]
  testCases -= 1

print(word)
