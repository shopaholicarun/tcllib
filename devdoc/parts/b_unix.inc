[subsection Unix]

This section describes the actions required to install Tcllib on Unix
systems (Linux, BSD, and related, including OS X).

If you have to install Tcllib on a Windows machine instead then see
section [sectref Windows].

[para] Tcllib comes with a standard TEA buildsystem using a
[syscmd configure] script and a [file Makefile] generated by it.

[para] To install Tcllib simply run

[example {
    ./configure
    make install
}]

in the toplevel directory of Tcllib itself. To build in a directory D
outside of Tcllib's toplevel directory simply make D the current
working directory and invoke [syscmd configure] with either its
absolute path or a proper relative path.

[para] The above will non-interactively install all packages,
applications found in Tcllib, and their manpages, in directories
derived from what [syscmd configure] found out about the system.

[para] The underlying tool is [file installer.tcl] in the toplevel
directory of Tcllib.

[para] Invoking this tool via

[example {
    ./installer.tcl -help
}]

will provide a short list of the available options. For more examples
see the various [term install] targets found in [file Makefile.in].