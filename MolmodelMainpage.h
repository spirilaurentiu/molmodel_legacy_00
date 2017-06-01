#ifndef SimTK_MOLMODEL_DOXYGEN_MAINPAGE_H_
#define SimTK_MOLMODEL_DOXYGEN_MAINPAGE_H_


/** @file
This "header" file is actually just the source for Molmodel's Doxygen
Mainpage, the first page that a user sees when entering the Doxygen-
generated API documentation. This is not actually included as part of the
Molmodel source and it is not installed with Molmodel. **/

/** @mainpage  Molmodel&tm; API Reference Documentation

<h2>What is this page?</h2>
You are looking at the main page for the reference documentation of the Molmodel
API. This documentation was generated by Doxygen directly from the Molmodel 
source code as annotated by the original programmers so it is both accurate and
comprehensive. As you will quickly realize if you look around, this is a large 
system providing a great deal of functionality. It is, however, very easy to 
use if you know where to begin -- and this reference documentation is most
definitely \e not the place to start if you want to learn how to use 
Molmodel. Instead, start with the tutorials that are available at the Molmodel 
project site https://simtk.org/home/molmodel, "Documents" tab. If you have 
specific questions, use the Molmodel help forum under the "Advanced" tab. You 
can also file bug reports and make feature requests using the tools provided 
there.

<h2>What is Molmodel?</h2>
Molmodel is a high-performance, industrial-grade open source C++ library 
providing sophisticated modeling of biomolecular systems as a set of 
articulated rigid bodies with motion modeled in internal coordinates. It makes
use of the Simbody internal-coordinate multibody dynamics package
(https://simtk.org/home/simbody) to produce coarse-grained mechanical models
of molecules, and the OpenMM GPU-accelerated force field package
(https://simtk.org/home/openmm) to efficiently calculate the forces that act on
the bodies. Molmodel also contains its own very-flexible molecular force field
framework, and provides access to Simbody's arbitrary force and constraint
capabilities, resulting in an extremely broad set of capabilities for 
application developers.

Molmodel has a powerful but easy-to-learn API that is intended to be used in 
building special purpose biomolecular applications. It is used in 
the RNABuilder application (https://simtk.org/home/rnatoolbox) to enable 
combined knowledge- and physics-based structural modeling of RNA molecules.

Molmodel's use of Simbody allows it to employ a minimal coordinate recursive 
formulation of the equations of motion, providing computation of system 
dynamics with O(N) computational complexity for N interconnected \e bodies (not
N \e atoms). 

Molmodel is part of the %SimTK biosimulation toolkit originating from Simbios, 
the NIH National Center for Physics-Based Simulation of Biological Structures 
at Stanford, funded under the NIH Roadmap for Medical Research, grant 
U54 GM072970. Molmodel is hosted on the simtk.org biosimulation community site,
at https://simtk.org/home/molmodel and is a community resource available for
unrestricted academic, commercial, government, and personal use.

Molmodel was conceived by Christopher Bruns and Michael Sherman (Sherm). It was
implemented primarily by Christopher, with substantial contributions from 
Sherm and Peter Eastman, all of the Simbios Center at Stanford. Many others have 
contributed to the software, support, training, and documentation and we invite 
well-engineered community contributions.

<h2>How to use this documentation</h2>
If you know the name of the class, method, or other symbol for which you want
information, you can enter it into the search box above and click directly to 
the documentation for that symbol. You can also enter words or partial symbols 
and get a list of names that include your search key. Unfortunately Doxygen
does not currently provide a full-text search capability. Another approach is
to select the Classes tab to get an alphabetical listing of all the class 
names, and there is a tab below that providing a class hierarchy view.

If you would like to see some more logical groupings of Molmodel classes
with some limited overview material, select the Modules tab to see 
groupings that made sense to the authors. You can also look at the
Related Pages to see other general topics.

Molmodel's API documentation also contains references to Simbody's and the
lower-level SimTK classes. These will not be listed in the main class list but
you can find them in the class hierarchy and can click on them when they 
appear in the Molmodel API. Generally Molmodel classes, modules, and pages
will be shown with bold links while the lower-level ones are quieter.

<h2>License</h2>
We encourage the broadest possible use of Molmodel for any purpose by using
the extremely permissive MIT License. We would appreciate some acknowledgement 
if our work has been helpful in yours, but our license does not require that.
For more information see our \ref molmodel_license_page "license page".
**/


/** @page molmodel_license_page  Molmodel&tm; Copyright and License
<h2>Copyright and license</h2>
This license, based on the maximally-permissive MIT License, defines the 
terms under which we offer Molmodel.
@verbatim
 * -------------------------------------------------------------------------- *
 *                            SimTK Molmodel(tm)                              *
 * -------------------------------------------------------------------------- *
 * Molmodel is part of the SimTK biosimulation toolkit originating from       *
 * Simbios, the NIH National Center for Physics-Based Simulation of           *
 * Biological Structures at Stanford, funded under the NIH Roadmap for        *
 * Medical Research, grant U54 GM072970. See https://simtk.org.               *
 *                                                                            *
 * Portions copyright (c) 2007-11 Stanford University and the Authors.        *
 * Authors: Christopher Bruns, Michael Sherman                                *
 * Contributors: Peter Eastman, Randy Radmer, Mark Friedrichs, Samuel Flores  *
 *                                                                            *
 * Permission is hereby granted, free of charge, to any person obtaining a    *
 * copy of this software and associated documentation files (the "Software"), *
 * to deal in the Software without restriction, including without limitation  *
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,   *
 * and/or sell copies of the Software, and to permit persons to whom the      *
 * Software is furnished to do so, subject to the following conditions:       *
 *                                                                            *
 * This sentence, the above copyright and permission notices, and the         *
 * following disclaimer shall be included in all copies or substantial        *
 * portions of the Software.                                                  *
 *                                                                            *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR *
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,   *
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL    *
 * THE AUTHORS, CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,    *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR      *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE  *
 * USE OR OTHER DEALINGS IN THE SOFTWARE.                                     *
 * -------------------------------------------------------------------------- * 
@endverbatim

<h2>What's with that "TM" in Molmodel&tm;?</h2>
That symbol is to let you know that we claim a trademark on the name "Molmodel"
so you may not use that name except to refer to our software as we distribute
it. The license permits you to make any kind of derivative work, or to use
all or part of Molmodel code in any way you like, but you can't call the
resulting work "Molmodel" without our agreement. We make that restriction 
because we don't want any confusion to exist about what is, and what is not, 
the Molmodel project that we are supporting. But ... if you want to make 
improvements to Molmodel we would love to have your well-engineered, open source
contributions to put into the main Molmodel source tree, in which case they 
\e would be included under the Molmodel name.

<h2>How to acknowledge us</h2>
Our license does not \e require that you acknowledge us, but we and our 
sponsors would be grateful if you did anyway! If our hard work has helped you
with yours, please throw us a bone and mention on your "About" page and in
your documentation that you are using Molmodel from 
https://simtk.org/home/molmodel. Where appropriate, please cite this paper:

\par
Schmidt, J.P.; Delp, S.L.; Sherman, M.A.; Taylor, C.A.; Pande, V.S.; 
Altman, R.B. "The Simbios National Center: Systems Biology in Motion" 
<i>Proceedings of the IEEE</i> 96(8):1266-1280, 2008.

We would be particularly grateful if you mention that Molmodel is primarily
funded by NIH Roadmap grant U54 GM072970. We appreciate that support very
much, and the NIH appreciates knowing that its funds are having an impact,
particularly on medical research and human health.
**/

#endif // SimTK_MOLMODEL_DOXYGEN_MAINPAGE_H_