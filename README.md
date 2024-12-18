<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>ft_printf - A Simplified printf Implementation</title>
</head>
<body>

    <h1>ft_printf - A Simplified printf Implementation</h1>

    <p>This project implements a simplified version of the <code>printf</code> function in C, named <code>ft_printf</code>. It supports basic formatting for different data types like characters (<code>%c</code>), strings (<code>%s</code>), pointers (<code>%p</code>), integers (<code>%d</code>, <code>%i</code>), unsigned integers (<code>%u</code>), and hexadecimal values (<code>%x</code>, <code>%X</code>), as well as the percent sign (<code>%%</code>).</p>

    <h2>How It Works</h2>

    <h3>1. The ft_printf Function</h3>
    <p>The <code>ft_printf</code> function is the core of the implementation. It takes a format string (<code>str</code>) and a variable number of arguments (<code>...</code>). It processes the format string character by character. For each format specifier (like <code>%c</code>, <code>%s</code>, etc.), it calls the appropriate helper function to print the corresponding argument.</p>

    <h3>2. The ft_check_format Function</h3>
    <p>This function handles different format specifiers (such as <code>%c</code>, <code>%s</code>, etc.). It checks the format character and calls the appropriate helper function to print the corresponding type of argument.</p>

    <h3>3. Printing Helper Functions</h3>
    <p>Each helper function (like <code>ft_print_c</code>, <code>ft_print_s</code>, etc.) is responsible for printing the respective format. The available helper functions include:</p>
    <ul>
        <li><code>ft_print_c</code>: Prints a single character.</li>
        <li><code>ft_print_s</code>: Prints a string.</li>
        <li><code>ft_print_d</code>: Prints an integer.</li>
        <li><code>ft_print_p</code>: Prints a pointer address in hexadecimal format.</li>
        <li><code>ft_print_u</code>: Prints an unsigned integer.</li>
        <li><code>ft_print_x</code>: Prints a hexadecimal value, with an option for uppercase or lowercase.</li>
    </ul>

    <h3>4. The main Function (Commented Out)</h3>
    <p>The <code>main</code> function, which is commented out in the code, serves as a test driver. It demonstrates the usage of <code>ft_printf</code> by printing various types of data using both <code>ft_printf</code> and the standard <code>printf</code> function. It helps compare the behavior and output of both functions to ensure that <code>ft_printf</code> works as expected.</p>

    <p>Some of the test cases include:</p>
    <ul>
        <li>Printing a character (<code>%c</code>)</li>
        <li>Printing a string (<code>%s</code>)</li>
        <li>Printing a pointer (<code>%p</code>)</li>
        <li>Printing an integer (<code>%d</code> or <code>%i</code>)</li>
        <li>Printing an unsigned integer (<code>%u</code>)</li>
        <li>Printing hexadecimal values (<code>%x</code> and <code>%X</code>)</li>
        <li>Printing a percent sign (<code>%%</code>)</li>
    </ul>

    <h2>Usage</h2>
    <p>To use <code>ft_printf</code>, simply include the header file <code>ft_printf.h</code> in your C code and call <code>ft_printf</code> with the appropriate format string and arguments.</p>

    <h3>Example usage:</h3>
    <pre>
<code>
ft_printf("My ft_printf  c --> %c\n", 'A');
ft_printf("My ft_printf  s --> %s\n", "Hello, World!");
</code>
    </pre>

    <h2>License</h2>
    <p>This project is licensed under the MIT License - see the <a href="LICENSE">LICENSE</a> file for details.</p>

</body>
</html>
