<h1>Printf Project</h1>
  <p>This project involves writing our own <code>printf</code> function in C. The goal is to understand how the standard <code>printf</code> function works by implementing it ourselves.</p>
  <h2>Project Details</h2>
  <h3>Overview</h3>
  <ul>
    <li><strong>Project Duration:</strong> Nov 10, 2023, 5:00 AM to Nov 15, 2023, 5:00 AM</li>
    <li><strong>Group Project:</strong> This project should be done in teams of 2.</li>
    <li><strong>Auto QA Review:</strong></li>
  <ul>
    <li>Mandatory: 36.6%</li>
    <li>Optional: 13.62%</li>
    <li>Total: 41.58%</li>
        </ul>
    </ul>
    <h3>Objectives</h3>
    <ul>
        <li>Implement a custom <code>printf</code> function.</li>
        <li>Handle various format specifiers such as <code>%c</code>, <code>%s</code>, <code>%d</code>, <code>%i</code>, etc.</li>
    </ul>
    <h3>Concepts to Understand</h3>
    <ul>
        <li><strong>Printf Function:</strong> Basics of creating your own <code>printf</code> function.</li>
        <li><strong>Team Projects:</strong> Collaboration and team dynamics.</li>
        <li><strong>Flowcharts:</strong> Visual representation of processes.</li>
        <li><strong>Pair Programming:</strong> Collaborative coding practices.</li>
        <li><strong>Technical Writing:</strong> Clear and concise documentation.</li>
    </ul>
    <h3>Requirements</h3>
    <ul>
        <li><strong>Editors:</strong> vi, vim, emacs</li>
        <li><strong>Compilation:</strong> Ubuntu 20.04 LTS using gcc with flags <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
        <li><strong>Code Style:</strong> Follow Betty style guidelines</li>
        <li><strong>No Global Variables:</strong> Not allowed to use global variables</li>
        <li><strong>Function Limit:</strong> No more than 5 functions per file</li>
        <li><strong>Header File:</strong> Include all function prototypes in <code>main.h</code></li>
        <li><strong>Readme File:</strong> A <code>README.md</code> file at the root of the project is mandatory</li>
    </ul>
    <h3>Authorized Functions and Macros</h3>
    <ul>
        <li><code>write</code> (man 2 write)</li>
        <li><code>malloc</code> (man 3 malloc)</li>
        <li><code>free</code> (man 3 free)</li>
        <li><code>va_start</code> (man 3 va_start)</li>
        <li><code>va_end</code> (man 3 va_end)</li>
        <li><code>va_copy</code> (man 3 va_copy)</li>
        <li><code>va_arg</code> (man 3 va_arg)</li>
    </ul>
    <h3>Compilation Command</h3>
    <pre><code>$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c</code></pre>
    <h3>Testing Example</h3>
    <p>Example test file:</p>
    <pre><code>#include <limits.h>
#include <stdio.h>
#include "main.h"

/\*\*

- main - Entry point
-
- Return: Always 0
  \*/
  int main(void)
  {
  int len;
  int len2;
  len = \_printf("Let's try to printf a simple sentence.\n");
  len2 = printf("Let's try to printf a simple sentence.\n");
  \_printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
  \_printf("Negative:[%d]\n", -762534);
  printf("Negative:[%d]\n", -762534);
  \_printf("Character:[%c]\n", 'H');
  printf("Character:[%c]\n", 'H');
  \_printf("String:[%s]\n", "I am a string !");
  printf("String:[%s]\n", "I am a string !");
  len = \_printf("Percent:[%%]\n");
  len2 = printf("Percent:[%%]\n");
  \_printf("Len:[%d]\n", len);
  printf("Len:[%d]\n", len2);
  return (0);
  }
  </code></pre>
  <h3>Important Notes</h3>
  <ul><li>Do not push any C files containing a <code>main</code> function in the root directory.</li>
    <li>Use a local buffer of 1024 characters to call <code>write</code> as little as possible.</li>
    <li>Plagiarism is strictly forbidden.</li>
      </ul>
      <h2>Tasks</h2>
      <ol>
    <li><strong>Basic Printf Function:</strong> Implement <code>_printf</code> to handle basic format specifiers <code>%c</code>, <code>%s</code>, and <code>%%</code>.</li>
    <li><strong>Integer Printf:</strong> Extend <code>_printf</code> to handle <code>%d</code> and <code>%i</code>.</li>
    <li><strong>Custom Binary:</strong> Implement a custom conversion specifier <code>%b</code>.</li>
    <li><strong>Unsigned and Octal:</strong> Extend <code>_printf</code> to handle <code>%u</code>, <code>%o</code>, <code>%x</code>, and <code>%X</code>.</li>
    <li><strong>Local Buffer:</strong> Use a local buffer for efficient writing.</li>
    <li><strong>Custom String Handling:</strong> Implement custom specifier <code>%S</code> for special string formatting.</li>
    <li><strong>Pointer Printf:</strong> Handle <code>%p</code> for pointers.</li>
    <li><strong>Flags and Widths:</strong> Handle various flag characters and field widths.</li>
    <li><strong>Length Modifiers:</strong> Extend <code>_printf</code> to handle length modifiers like <code>%l</code> and <code>%h</code>.</li>
    <li><strong>Precision and Zero Flags:</strong> Handle precision and zero flag characters.</li>
    <li><strong>Reverse and ROT13:</strong> Implement custom specifiers <code>%r</code> (reversed string) and <code>%R</code> (ROT13 encoding).</li>
    <li><strong>Combining Features:</strong> Ensure all the above features work together seamlessly.</li>
      </ol>
      <h2>GitHub Repository</h2>
      <ul>
      <li><strong>Repository Name:</strong> <code>printf</code></li>
      </ul>
