<h1>ft_printf - A Simplified printf Implementation</h1>

<p>This project implements a simplified version of the <strong>printf</strong> function in C, named <strong>ft_printf</strong>. It supports basic formatting for different data types like characters (%c), strings (%s), pointers (%p), integers (%d, %i), unsigned integers (%u), and hexadecimal values (%x, %X), as well as the percent sign (%%).</p>

<h2>How It Works</h2>

<h3>1. The ft_printf Function</h3>
<p>The <strong>ft_printf</strong> function is the core of the implementation. It takes a format string (str) and a variable number of arguments (...). It processes the format string character by character. For each format specifier (like %c, %s, etc.), it calls the appropriate helper function to print the corresponding argument.</p>

<h3>2. The ft_check_format Function</h3>
<p>This function handles different format specifiers (such as %c, %s, etc.). It checks the format character and calls the appropriate helper function to print the corresponding type of argument.</p>

<h3>3. Printing Helper Functions</h3>
<p>Each helper function (like <strong>ft_print_c</strong>, <strong>ft_print_s</strong>, etc.) is responsible for printing the respective format. The available helper functions include:</p>
    <ul>
        <li><strong>ft_print_c</strong>: Prints a single character.</li>
        <li><strong>ft_print_s</strong>: Prints a string.</li>
        <li><strong>ft_print_d</strong>: Prints an integer.</li>
        <li><strong>ft_print_p</strong>: Prints a pointer address in hexadecimal format.</li>
        <li><strong>ft_print_u</strong>: Prints an unsigned integer.</li>
        <li><strong>ft_print_x</strong>: Prints a hexadecimal value, with an option for uppercase or lowercase.</li>
    </ul>

<h3>4. The main Function</h3>
<p>The <strong>main</strong> function, which is commented out in the code, serves as a test driver. It demonstrates the usage of <strong>ft_printf</strong> by printing various types of data using both <strong>ft_printf</strong> and the standard <strong>printf</strong> function. It helps compare the behavior and output of both functions to ensure that <strong>ft_printf</strong> works as expected.</p>

<p>Some of the test cases include:</p>
    <ul>
        <li>Printing a character (%c)</li>
        <li>Printing a string (%s)</li>
        <li>Printing a pointer (%p)</li>
        <li>Printing an integer (%d or %i)</li>
        <li>Printing an unsigned integer (%u)</li>
        <li>Printing hexadecimal values (%x and %X)</li>
        <li>Printing a percent sign (%%)</li>
    </ul>

<h2>Usage</h2>
<p>To use <strong>ft_printf</strong>, simply include the header file <strong>ft_printf.h</strong> in your C code and call <strong>ft_printf</strong> with the appropriate format string and arguments.</p>

<h3>Example usage:</h3>
<p>ft_printf("My ft_printf  c --> %c\n", 'A');</p>
<p>ft_printf("My ft_printf  s --> %s\n", "Hello, World!");</p>


