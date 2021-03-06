/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(tagged_stream_block.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(635b767c5146a5d65f0757f7fb26a904)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/tagged_stream_block.h>
// pydoc.h is automatically generated in the build directory
#include <tagged_stream_block_pydoc.h>

void bind_tagged_stream_block(py::module& m)
{

    using tagged_stream_block = ::gr::tagged_stream_block;


    py::class_<tagged_stream_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<tagged_stream_block>>(
        m, "tagged_stream_block", D(tagged_stream_block))


        .def("forecast",
             &tagged_stream_block::forecast,
             py::arg("noutput_items"),
             py::arg("ninput_items_required"),
             D(tagged_stream_block, forecast))


        .def("check_topology",
             &tagged_stream_block::check_topology,
             py::arg("ninputs"),
             py::arg("arg1"),
             D(tagged_stream_block, check_topology))


        .def("general_work",
             &tagged_stream_block::general_work,
             py::arg("noutput_items"),
             py::arg("ninput_items"),
             py::arg("input_items"),
             py::arg("output_items"),
             D(tagged_stream_block, general_work))


        .def("work",
             &tagged_stream_block::work,
             py::arg("noutput_items"),
             py::arg("ninput_items"),
             py::arg("input_items"),
             py::arg("output_items"),
             D(tagged_stream_block, work))

        ;


    py::module m_messages = m.def_submodule("messages");


    py::module m_thread = m.def_submodule("thread");
}
