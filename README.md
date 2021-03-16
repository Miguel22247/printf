<!DOCTYPE html>
<html>

<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>README</title>
  <link rel="stylesheet" href="https://stackedit.io/style.css" />
</head>

<body class="stackedit">
  <div class="stackedit__html"><h1 id="readme-for-_printf-project-repository">README for _printf project repository</h1>
<p>This repository contains our printf function for holberton.</p>
<p>Project: 0x11. C - printf</p>
<p>Write your own printf function.</p>
<h1 id="information">Information</h1>
<p>In this project we need to write a function that works similar to the original function printf in ‘C’, for to do this task first we start for understand the function and how printf does this function we make a very basic flowchart with the things that we believe that printf does, after that we started for writing all the functions that we use later and creating the header file with all the libraries and prototypes that we use in the program.</p>
<h2 id="files">Files:</h2>
<ul>
<li>
<p>_printf.c - replaces the printf function</p>
</li>
<li>
<p>_putchar.c - putchar function, writes the character c to stdout</p>
</li>
<li>
<p>holberton.h - header file with all the definitions</p>
</li>
<li>
<p>functions.c - storage all the code related to <code>%d and %i</code></p>
</li>
<li>
<p>functions2.c - storage all the code related to <code>%s and %c</code>.</p>
<h2 id="how-to-test-the-printf-function">How to test the “printf function”</h2>
</li>
<li>
<p>Clone this <a href="https://github.com/Miguel22247/printf/">repository</a></p>
</li>
<li>
<p>mv the file main.c that it’s in test folder to printf folder <code>mv test/main.c /printf/</code></p>
</li>
<li>
<p>use  <code>$ gcc -Wall -Werror -Wextra -pedantic *.c</code>  to compile it <strong>(If returns an error in printf(“Unknown:[%r]”); use <code>-Wno-format</code> flag)</strong></p>
</li>
<li>
<p>run with ./a.out (is the default output)</p>
</li>
</ul>
<h2 id="flowchart">Flowchart</h2>
<div class="mermaid"><svg xmlns="http://www.w3.org/2000/svg" id="mermaid-svg-FbFbpSrmFr5x34My" width="100%" style="max-width: 412.94791412353516px;" viewBox="0 0 412.94791412353516 731.4093856811523"><g transform="translate(-12, -12)"><g class="output"><g class="clusters"></g><g class="edgePaths"><g class="edgePath" style="opacity: 1;"><path class="path" d="M241.52343368530273,73.57291793823242L241.52343368530273,98.57291793823242L241.52343368530273,123.57291793823242" marker-end="url(#arrowhead440)" style="fill:none"></path><defs><marker id="arrowhead440" viewBox="0 0 10 10" refX="9" refY="5" markerUnits="strokeWidth" markerWidth="8" markerHeight="6" orient="auto"><path d="M 0 0 L 10 5 L 0 10 z" class="arrowheadPath" style="stroke-width: 1; stroke-dasharray: 1, 0;"></path></marker></defs></g><g class="edgePath" style="opacity: 1;"><path class="path" d="M241.52343368530273,170.23958587646484L241.52343368530273,195.23958587646484L242.02343368530276,220.73958606719972" marker-end="url(#arrowhead441)" style="fill:none"></path><defs><marker id="arrowhead441" viewBox="0 0 10 10" refX="9" refY="5" markerUnits="strokeWidth" markerWidth="8" markerHeight="6" orient="auto"><path d="M 0 0 L 10 5 L 0 10 z" class="arrowheadPath" style="stroke-width: 1; stroke-dasharray: 1, 0;"></path></marker></defs></g><g class="edgePath" style="opacity: 1;"><path class="path" d="M207.01129864775706,314.23057908141186L134.65103912353516,373.74271392822266L134.65103912353516,398.74271392822266" marker-end="url(#arrowhead442)" style="fill:none"></path><defs><marker id="arrowhead442" viewBox="0 0 10 10" refX="9" refY="5" markerUnits="strokeWidth" markerWidth="8" markerHeight="6" orient="auto"><path d="M 0 0 L 10 5 L 0 10 z" class="arrowheadPath" style="stroke-width: 1; stroke-dasharray: 1, 0;"></path></marker></defs></g><g class="edgePath" style="opacity: 1;"><path class="path" d="M134.65103912353516,445.4093818664551L134.65103912353516,470.4093818664551L134.65103912353516,495.4093818664551" marker-end="url(#arrowhead443)" style="fill:none"></path><defs><marker id="arrowhead443" viewBox="0 0 10 10" refX="9" refY="5" markerUnits="strokeWidth" markerWidth="8" markerHeight="6" orient="auto"><path d="M 0 0 L 10 5 L 0 10 z" class="arrowheadPath" style="stroke-width: 1; stroke-dasharray: 1, 0;"></path></marker></defs></g><g class="edgePath" style="opacity: 1;"><path class="path" d="M134.65103912353516,542.0760498046875L134.65103912353516,567.0760498046875L134.65103912353516,592.0760498046875" marker-end="url(#arrowhead444)" style="fill:none"></path><defs><marker id="arrowhead444" viewBox="0 0 10 10" refX="9" refY="5" markerUnits="strokeWidth" markerWidth="8" markerHeight="6" orient="auto"><path d="M 0 0 L 10 5 L 0 10 z" class="arrowheadPath" style="stroke-width: 1; stroke-dasharray: 1, 0;"></path></marker></defs></g><g class="edgePath" style="opacity: 1;"><path class="path" d="M134.65103912353516,638.7427177429199L134.65103912353516,663.7427177429199L134.65103912353516,688.7427177429199" marker-end="url(#arrowhead445)" style="fill:none"></path><defs><marker id="arrowhead445" viewBox="0 0 10 10" refX="9" refY="5" markerUnits="strokeWidth" markerWidth="8" markerHeight="6" orient="auto"><path d="M 0 0 L 10 5 L 0 10 z" class="arrowheadPath" style="stroke-width: 1; stroke-dasharray: 1, 0;"></path></marker></defs></g><g class="edgePath" style="opacity: 1;"><path class="path" d="M277.0355689307199,314.23057925501007L348.3958282470703,373.74271392822266L348.3958282470703,398.74271392822266" marker-end="url(#arrowhead446)" style="fill:none"></path><defs><marker id="arrowhead446" viewBox="0 0 10 10" refX="9" refY="5" markerUnits="strokeWidth" markerWidth="8" markerHeight="6" orient="auto"><path d="M 0 0 L 10 5 L 0 10 z" class="arrowheadPath" style="stroke-width: 1; stroke-dasharray: 1, 0;"></path></marker></defs></g><g class="edgePath" style="opacity: 1;"><path class="path" d="M348.3958282470703,445.4093818664551L348.3958282470703,470.4093818664551L348.3958282470703,495.4093818664551" marker-end="url(#arrowhead447)" style="fill:none"></path><defs><marker id="arrowhead447" viewBox="0 0 10 10" refX="9" refY="5" markerUnits="strokeWidth" markerWidth="8" markerHeight="6" orient="auto"><path d="M 0 0 L 10 5 L 0 10 z" class="arrowheadPath" style="stroke-width: 1; stroke-dasharray: 1, 0;"></path></marker></defs></g><g class="edgePath" style="opacity: 1;"><path class="path" d="M348.3958282470703,542.0760498046875L348.3958282470703,567.0760498046875L348.3958282470703,592.0760498046875" marker-end="url(#arrowhead448)" style="fill:none"></path><defs><marker id="arrowhead448" viewBox="0 0 10 10" refX="9" refY="5" markerUnits="strokeWidth" markerWidth="8" markerHeight="6" orient="auto"><path d="M 0 0 L 10 5 L 0 10 z" class="arrowheadPath" style="stroke-width: 1; stroke-dasharray: 1, 0;"></path></marker></defs></g></g><g class="edgeLabels"><g class="edgeLabel" transform="" style="opacity: 1;"><g transform="translate(0,0)" class="label"><foreignObject width="0" height="0"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;"><span class="edgeLabel"></span></div></foreignObject></g></g><g class="edgeLabel" transform="" style="opacity: 1;"><g transform="translate(0,0)" class="label"><foreignObject width="0" height="0"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;"><span class="edgeLabel"></span></div></foreignObject></g></g><g class="edgeLabel" transform="" style="opacity: 1;"><g transform="translate(0,0)" class="label"><foreignObject width="0" height="0"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;"><span class="edgeLabel"></span></div></foreignObject></g></g><g class="edgeLabel" transform="" style="opacity: 1;"><g transform="translate(0,0)" class="label"><foreignObject width="0" height="0"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;"><span class="edgeLabel"></span></div></foreignObject></g></g><g class="edgeLabel" transform="" style="opacity: 1;"><g transform="translate(0,0)" class="label"><foreignObject width="0" height="0"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;"><span class="edgeLabel"></span></div></foreignObject></g></g><g class="edgeLabel" transform="" style="opacity: 1;"><g transform="translate(0,0)" class="label"><foreignObject width="0" height="0"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;"><span class="edgeLabel"></span></div></foreignObject></g></g><g class="edgeLabel" transform="" style="opacity: 1;"><g transform="translate(0,0)" class="label"><foreignObject width="0" height="0"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;"><span class="edgeLabel"></span></div></foreignObject></g></g><g class="edgeLabel" transform="" style="opacity: 1;"><g transform="translate(0,0)" class="label"><foreignObject width="0" height="0"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;"><span class="edgeLabel"></span></div></foreignObject></g></g><g class="edgeLabel" transform="" style="opacity: 1;"><g transform="translate(0,0)" class="label"><foreignObject width="0" height="0"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;"><span class="edgeLabel"></span></div></foreignObject></g></g></g><g class="nodes"><g class="node" id="A" transform="translate(241.52343368530273,46.78645896911621)" style="opacity: 1;"><circle x="-26.78645896911621" y="-23.33333396911621" r="26.78645896911621"></circle><g class="label" transform="translate(0,0)"><g transform="translate(-16.78645896911621,-13.333333969116211)"><foreignObject width="33.57291793823242" height="26.666667938232422"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;">Start</div></foreignObject></g></g></g><g class="node" id="B" transform="translate(241.52343368530273,146.90625190734863)" style="opacity: 1;"><rect rx="0" ry="0" x="-90.23958587646484" y="-23.33333396911621" width="180.4791717529297" height="46.66666793823242"></rect><g class="label" transform="translate(0,0)"><g transform="translate(-80.23958587646484,-13.333333969116211)"><foreignObject width="160.4791717529297" height="26.666667938232422"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;">input something or not</div></foreignObject></g></g></g><g class="node" id="C" transform="translate(241.52343368530273,284.49114990234375)" style="opacity: 1;"><polygon points="64.25156421661377,0 128.50312843322754,-64.25156421661377 64.25156421661377,-128.50312843322754 0,-64.25156421661377" rx="5" ry="5" transform="translate(-64.25156421661377,64.25156421661377)"></polygon><g class="label" transform="translate(0,0)"><g transform="translate(-38.05729293823242,-13.333333969116211)"><foreignObject width="76.11458587646484" height="26.666667938232422"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;">Conditions</div></foreignObject></g></g></g><g class="node" id="D" transform="translate(134.65103912353516,422.07604789733887)" style="opacity: 1;"><rect rx="0" ry="0" x="-66.06771087646484" y="-23.33333396911621" width="132.1354217529297" height="46.66666793823242"></rect><g class="label" transform="translate(0,0)"><g transform="translate(-56.067710876464844,-13.333333969116211)"><foreignObject width="112.13542175292969" height="26.666667938232422"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;">if input != NULL</div></foreignObject></g></g></g><g class="node" id="E" transform="translate(134.65103912353516,518.7427158355713)" style="opacity: 1;"><rect rx="0" ry="0" x="-114.65104675292969" y="-23.33333396911621" width="229.30209350585938" height="46.66666793823242"></rect><g class="label" transform="translate(0,0)"><g transform="translate(-104.65104675292969,-13.333333969116211)"><foreignObject width="209.30209350585938" height="26.666667938232422"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;">Go through what was entered</div></foreignObject></g></g></g><g class="node" id="F" transform="translate(134.65103912353516,615.4093837738037)" style="opacity: 1;"><rect rx="0" ry="0" x="-110.38021087646484" y="-23.33333396911621" width="220.7604217529297" height="46.66666793823242"></rect><g class="label" transform="translate(0,0)"><g transform="translate(-100.38021087646484,-13.333333969116211)"><foreignObject width="200.7604217529297" height="26.666667938232422"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;">Print while input is traversed</div></foreignObject></g></g></g><g class="node" id="G" transform="translate(134.65103912353516,712.0760517120361)" style="opacity: 1;"><rect rx="0" ry="0" x="-23.39583396911621" y="-23.33333396911621" width="46.79166793823242" height="46.66666793823242"></rect><g class="label" transform="translate(0,0)"><g transform="translate(-13.395833969116211,-13.333333969116211)"><foreignObject width="26.791667938232422" height="26.666667938232422"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;">Exit</div></foreignObject></g></g></g><g class="node" id="H" transform="translate(348.3958282470703,422.07604789733887)" style="opacity: 1;"><rect rx="0" ry="0" x="-68.55208587646484" y="-23.33333396911621" width="137.1041717529297" height="46.66666793823242"></rect><g class="label" transform="translate(0,0)"><g transform="translate(-58.552085876464844,-13.333333969116211)"><foreignObject width="117.10417175292969" height="26.666667938232422"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;">if input == NULL</div></foreignObject></g></g></g><g class="node" id="I" transform="translate(348.3958282470703,518.7427158355713)" style="opacity: 1;"><rect rx="0" ry="0" x="-49.09375" y="-23.33333396911621" width="98.1875" height="46.66666793823242"></rect><g class="label" transform="translate(0,0)"><g transform="translate(-39.09375,-13.333333969116211)"><foreignObject width="78.1875" height="26.666667938232422"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;">Print NULL</div></foreignObject></g></g></g><g class="node" id="J" transform="translate(348.3958282470703,615.4093837738037)" style="opacity: 1;"><rect rx="0" ry="0" x="-23.39583396911621" y="-23.33333396911621" width="46.79166793823242" height="46.66666793823242"></rect><g class="label" transform="translate(0,0)"><g transform="translate(-13.395833969116211,-13.333333969116211)"><foreignObject width="26.791667938232422" height="26.666667938232422"><div xmlns="http://www.w3.org/1999/xhtml" style="display: inline-block; white-space: nowrap;">Exit</div></foreignObject></g></g></g></g></g></g></svg></div>
<h1 id="code-style">Code Style</h1>
<p>Betty Code Style</p>
<h1 id="tasks-done">Tasks done</h1>
<p><strong>0. I’m not going anywhere. You can print that wherever you want to. I’m here and I’m a Spur for life</strong></p>
<p>Write a function that produces output according to a format.</p>
<ul>
<li>Prototype:  <code>int _printf(const char *format, ...);</code></li>
<li>Returns: the number of characters printed (excluding the null byte used to end output to strings)</li>
<li>write output to stdout, the standard output stream</li>
<li><code>format</code>  is a character string. The format string is composed of zero or more directives. See  <code>man 3 printf</code>  for more detail. You need to handle the following conversion specifiers:
<ul>
<li><code>c</code></li>
<li><code>s</code></li>
<li><code>%</code></li>
</ul>
</li>
<li>You don’t have to reproduce the buffer handling of the C library  <code>printf</code>  function</li>
<li>You don’t have to handle the flag characters</li>
<li>You don’t have to handle field width</li>
<li>You don’t have to handle precision</li>
<li>You don’t have to handle the length modifiers</li>
</ul>
<p><strong>1. Education is when you read the fine print. Experience is what you get if you don’t</strong></p>
<p>Handle the following conversion specifiers: <code>%d, %I</code></p>
<p><strong>2. Just because it’s in print doesn’t mean it’s the gospel</strong></p>
<p>Create a man page for your function.</p>
<h1 id="authors">Authors</h1>
<p><a href="https://github.com/jtusetgraniello">Jorge Tuset</a> and <a href="https://github.com/Miguel22247">Miguel Pacheco</a> | Cohort 14 | Holberton School</p>
<h1 id="copyright">Copyright</h1>
<p>Jorge Tuset and Miguel Pacheco © 2021 | All Rights Reserved</p>
</div>
</body>

</html>
