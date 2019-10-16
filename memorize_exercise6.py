from random import randint



C_OPERATORS = [
'auto',
'break',
'case',
'char',
'const',
'continue',
'default',
'do',
'double',
'else',
'enum',
'extern',
'float',
'for',
'goto',
'if',
'int',
'long',
'register',
'return',
'short',
'signed',
'sizeof',
'static',
'struct',
'switch',
'typedef',
'union',
'unsigned',
'void',
'volatile',
'while'
]

while True:
    raw_input("What does the %s keyword mean in C?" % C_OPERATORS[randint(0,len(C_OPERATORS))])
