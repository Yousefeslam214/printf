<h1>Printf Project</h1>
  <p>This project is about creating our own version of the <code>printf</code> function in C.</p>
  <h2>What is printf?</h2>
  <p><code>printf</code> is a function in C that prints formatted output to the screen. It can print characters, strings, numbers, and more.</p>
  <h2>How to use our printf</h2>
  <p>To use our custom <code>printf</code> function, include the <code>main.h</code> header file and call <code>_printf</code> like this:</p>
  <pre>
  <code>
#include "main.h"

int main(void)
{
    _printf("Hello, World!\n");
    return (0);
}
  </code>
  </pre>

  <h2>Functions we implemented</h2>
  <p>We implemented several features of the <code>printf</code> function, including:</p>
  <ul>
    <li>Printing characters (<code>%c</code>)</li>
    <li>Printing strings (<code>%s</code>)</li>
    <li>Printing integers (<code>%d</code> and <code>%i</code>)</li>
    <li>Printing percent signs (<code>%%</code>)</li>
  </ul>
  <h2>How to compile and run</h2>
  <p>To compile the code, use <code>gcc</code> with the following command:</p>
  <pre>
    <code>gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf</code>
  </pre>
  <p>To run the code, use:</p>
  <pre><code>./printf</code></pre>
  <h2>Example</h2>
  <p>Here is an example of how the output looks:</p>
  <pre><code>
#include "main.h"

int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}
  </code></pre>
  <p>The output will be:</p>
  <pre><code>
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
  </code></pre>
  <h2>Author</h2>
  <p>This project was created by Yousef.</p>
  <h2>License</h2>
  <p>This project is for educational purposes only.</p>
