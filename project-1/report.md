[Home of Lab Report](../lab.html)

# Program Ex 01: Program to write my favourite poem.

## Discussion 
To print a simple program we need to include header file "#include <stdio.h>" in the first line.
This line is used to include standard input output header file.
It is necessary to include,to use various functions written in C language such as printf,scanf,puts etc.

Then we use "int main()"
int main – ‘int main’ means that our function needs to return some integer at the end of the execution 
and we do so by returning 0 at the end of the program. 
0 is the standard for the “successful execution of the program”.
So,it is necessary to use function main. 

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release project-1
[100%]: build ok!

```

## Execution
```
xmake run


Hunarpreet Singh
ME-A1 2030106

My Favourite Poem;-
^^^^^^^^^^^^^^^^^^^^^^^^
Twinkle Twinkle Little Star,
How I Wonder What You Are,
Up Above The World So High,
Like A Diamond In The Sky,
Twinkle Twinkle Little Star,
How I wonder What You Are,

```

### Known Bugs and/or Errors:

NO Known bugs or errors.

### Lessons Learned:

1. Learnt to use printf function.
2. Learnt what is string And how to use it.
3. Learnt to use the new line character.
