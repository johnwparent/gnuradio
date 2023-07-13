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
/* BINDTOOL_GEN_AUTOMATIC(1)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(dvb_bbheader_bb.h)                                         */
/* BINDTOOL_HEADER_FILE_HASH(4cb7125c2672510bcdd0c4728fc080f0)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dtv/dvb_bbheader_bb.h>
// pydoc.h is automatically generated in the build directory
#include <dvb_bbheader_bb_pydoc.h>

void bind_dvb_bbheader_bb(py::module& m)
{

    using dvb_bbheader_bb = ::gr::dtv::dvb_bbheader_bb;


    py::class_<dvb_bbheader_bb,
               gr::block,
               gr::basic_block,
               std::shared_ptr<dvb_bbheader_bb>>(m, "dvb_bbheader_bb", D(dvb_bbheader_bb))

        .def(py::init(&dvb_bbheader_bb::make),
             py::arg("standard"),
             py::arg("framesize"),
             py::arg("rate"),
             py::arg("rolloff"),
             py::arg("mode"),
             py::arg("inband"),
             py::arg("fecblocks"),
             py::arg("tsrate"),
             D(dvb_bbheader_bb, make))


        ;
}
