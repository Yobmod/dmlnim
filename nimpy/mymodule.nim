import nimpy

proc greet(name: string): string {.exportpy.} =
    return "Hello, " & name & "!"

proc hello(): string {.exportpy.} =
  echo "What's your name? "
  var name: string = readLine(stdin)
  return "Hi, " & name & "!"

# echo hello()
