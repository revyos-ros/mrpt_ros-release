#include <iterator>
#include <memory>
#include <mrpt/hwdrivers/CGPSInterface.h>
#include <mrpt/hwdrivers/CImageGrabber_OpenCV.h>
#include <mrpt/hwdrivers/CKinect.h>
#include <mrpt/obs/CObservation3DRangeScan.h>
#include <mrpt/opengl/CRenderizable.h>
#include <mrpt/typemeta/TEnumType.h>
#include <sstream> // __str__
#include <string>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>
#include <pybind11/stl.h>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_mrpt_typemeta_TEnumType_2(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // mrpt::typemeta::internal::bimap file:mrpt/typemeta/TEnumType.h line:22
		pybind11::class_<mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace,std::string>, std::shared_ptr<mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace,std::string>>> cl(M("mrpt::typemeta::internal"), "bimap_mrpt_opengl_TCullFace_std_string_t", "");
		cl.def( pybind11::init( [](){ return new mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace,std::string>(); } ) );
		cl.def( pybind11::init( [](mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace,std::string> const &o){ return new mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace,std::string>(o); } ) );
		cl.def_readwrite("m_k2v", &mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace,std::string>::m_k2v);
		cl.def_readwrite("m_v2k", &mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace,std::string>::m_v2k);
		cl.def("direct", (bool (mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace,std::string>::*)(const enum mrpt::opengl::TCullFace &, std::string &) const) &mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace, std::string>::direct, "C++: mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace, std::string>::direct(const enum mrpt::opengl::TCullFace &, std::string &) const --> bool", pybind11::arg("k"), pybind11::arg("out_v"));
		cl.def("inverse", (bool (mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace,std::string>::*)(const std::string &, enum mrpt::opengl::TCullFace &) const) &mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace, std::string>::inverse, "C++: mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace, std::string>::inverse(const std::string &, enum mrpt::opengl::TCullFace &) const --> bool", pybind11::arg("v"), pybind11::arg("out_k"));
		cl.def("insert", (void (mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace,std::string>::*)(const enum mrpt::opengl::TCullFace &, const std::string &)) &mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace, std::string>::insert, "C++: mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace, std::string>::insert(const enum mrpt::opengl::TCullFace &, const std::string &) --> void", pybind11::arg("k"), pybind11::arg("v"));
		cl.def("assign", (struct mrpt::typemeta::internal::bimap<enum mrpt::opengl::TCullFace, std::string > & (mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace,std::string>::*)(const struct mrpt::typemeta::internal::bimap<enum mrpt::opengl::TCullFace, std::string > &)) &mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace, std::string>::operator=, "C++: mrpt::typemeta::internal::bimap<mrpt::opengl::TCullFace, std::string>::operator=(const struct mrpt::typemeta::internal::bimap<enum mrpt::opengl::TCullFace, std::string > &) --> struct mrpt::typemeta::internal::bimap<enum mrpt::opengl::TCullFace, std::string > &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // mrpt::typemeta::internal::bimap file:mrpt/typemeta/TEnumType.h line:22
		pybind11::class_<mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType,std::string>, std::shared_ptr<mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType,std::string>>> cl(M("mrpt::typemeta::internal"), "bimap_mrpt_hwdrivers_TCameraType_std_string_t", "");
		cl.def( pybind11::init( [](){ return new mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType,std::string>(); } ) );
		cl.def( pybind11::init( [](mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType,std::string> const &o){ return new mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType,std::string>(o); } ) );
		cl.def_readwrite("m_k2v", &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType,std::string>::m_k2v);
		cl.def_readwrite("m_v2k", &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType,std::string>::m_v2k);
		cl.def("direct", (bool (mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType,std::string>::*)(const enum mrpt::hwdrivers::TCameraType &, std::string &) const) &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType, std::string>::direct, "C++: mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType, std::string>::direct(const enum mrpt::hwdrivers::TCameraType &, std::string &) const --> bool", pybind11::arg("k"), pybind11::arg("out_v"));
		cl.def("inverse", (bool (mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType,std::string>::*)(const std::string &, enum mrpt::hwdrivers::TCameraType &) const) &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType, std::string>::inverse, "C++: mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType, std::string>::inverse(const std::string &, enum mrpt::hwdrivers::TCameraType &) const --> bool", pybind11::arg("v"), pybind11::arg("out_k"));
		cl.def("insert", (void (mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType,std::string>::*)(const enum mrpt::hwdrivers::TCameraType &, const std::string &)) &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType, std::string>::insert, "C++: mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType, std::string>::insert(const enum mrpt::hwdrivers::TCameraType &, const std::string &) --> void", pybind11::arg("k"), pybind11::arg("v"));
		cl.def("assign", (struct mrpt::typemeta::internal::bimap<enum mrpt::hwdrivers::TCameraType, std::string > & (mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType,std::string>::*)(const struct mrpt::typemeta::internal::bimap<enum mrpt::hwdrivers::TCameraType, std::string > &)) &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType, std::string>::operator=, "C++: mrpt::typemeta::internal::bimap<mrpt::hwdrivers::TCameraType, std::string>::operator=(const struct mrpt::typemeta::internal::bimap<enum mrpt::hwdrivers::TCameraType, std::string > &) --> struct mrpt::typemeta::internal::bimap<enum mrpt::hwdrivers::TCameraType, std::string > &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // mrpt::typemeta::internal::bimap file:mrpt/typemeta/TEnumType.h line:22
		pybind11::class_<mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID,std::string>, std::shared_ptr<mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID,std::string>>> cl(M("mrpt::typemeta::internal"), "bimap_mrpt_obs_CObservation3DRangeScan_TIntensityChannelID_std_string_t", "");
		cl.def( pybind11::init( [](){ return new mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID,std::string>(); } ) );
		cl.def( pybind11::init( [](mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID,std::string> const &o){ return new mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID,std::string>(o); } ) );
		cl.def_readwrite("m_k2v", &mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID,std::string>::m_k2v);
		cl.def_readwrite("m_v2k", &mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID,std::string>::m_v2k);
		cl.def("direct", (bool (mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID,std::string>::*)(const enum mrpt::obs::CObservation3DRangeScan::TIntensityChannelID &, std::string &) const) &mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID, std::string>::direct, "C++: mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID, std::string>::direct(const enum mrpt::obs::CObservation3DRangeScan::TIntensityChannelID &, std::string &) const --> bool", pybind11::arg("k"), pybind11::arg("out_v"));
		cl.def("inverse", (bool (mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID,std::string>::*)(const std::string &, enum mrpt::obs::CObservation3DRangeScan::TIntensityChannelID &) const) &mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID, std::string>::inverse, "C++: mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID, std::string>::inverse(const std::string &, enum mrpt::obs::CObservation3DRangeScan::TIntensityChannelID &) const --> bool", pybind11::arg("v"), pybind11::arg("out_k"));
		cl.def("insert", (void (mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID,std::string>::*)(const enum mrpt::obs::CObservation3DRangeScan::TIntensityChannelID &, const std::string &)) &mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID, std::string>::insert, "C++: mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID, std::string>::insert(const enum mrpt::obs::CObservation3DRangeScan::TIntensityChannelID &, const std::string &) --> void", pybind11::arg("k"), pybind11::arg("v"));
		cl.def("assign", (struct mrpt::typemeta::internal::bimap<enum mrpt::obs::CObservation3DRangeScan::TIntensityChannelID, std::string > & (mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID,std::string>::*)(const struct mrpt::typemeta::internal::bimap<enum mrpt::obs::CObservation3DRangeScan::TIntensityChannelID, std::string > &)) &mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID, std::string>::operator=, "C++: mrpt::typemeta::internal::bimap<mrpt::obs::CObservation3DRangeScan::TIntensityChannelID, std::string>::operator=(const struct mrpt::typemeta::internal::bimap<enum mrpt::obs::CObservation3DRangeScan::TIntensityChannelID, std::string > &) --> struct mrpt::typemeta::internal::bimap<enum mrpt::obs::CObservation3DRangeScan::TIntensityChannelID, std::string > &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // mrpt::typemeta::internal::bimap file:mrpt/typemeta/TEnumType.h line:22
		pybind11::class_<mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel,std::string>, std::shared_ptr<mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel,std::string>>> cl(M("mrpt::typemeta::internal"), "bimap_mrpt_hwdrivers_CKinect_TVideoChannel_std_string_t", "");
		cl.def( pybind11::init( [](){ return new mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel,std::string>(); } ) );
		cl.def( pybind11::init( [](mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel,std::string> const &o){ return new mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel,std::string>(o); } ) );
		cl.def_readwrite("m_k2v", &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel,std::string>::m_k2v);
		cl.def_readwrite("m_v2k", &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel,std::string>::m_v2k);
		cl.def("direct", (bool (mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel,std::string>::*)(const enum mrpt::hwdrivers::CKinect::TVideoChannel &, std::string &) const) &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel, std::string>::direct, "C++: mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel, std::string>::direct(const enum mrpt::hwdrivers::CKinect::TVideoChannel &, std::string &) const --> bool", pybind11::arg("k"), pybind11::arg("out_v"));
		cl.def("inverse", (bool (mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel,std::string>::*)(const std::string &, enum mrpt::hwdrivers::CKinect::TVideoChannel &) const) &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel, std::string>::inverse, "C++: mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel, std::string>::inverse(const std::string &, enum mrpt::hwdrivers::CKinect::TVideoChannel &) const --> bool", pybind11::arg("v"), pybind11::arg("out_k"));
		cl.def("insert", (void (mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel,std::string>::*)(const enum mrpt::hwdrivers::CKinect::TVideoChannel &, const std::string &)) &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel, std::string>::insert, "C++: mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel, std::string>::insert(const enum mrpt::hwdrivers::CKinect::TVideoChannel &, const std::string &) --> void", pybind11::arg("k"), pybind11::arg("v"));
		cl.def("assign", (struct mrpt::typemeta::internal::bimap<enum mrpt::hwdrivers::CKinect::TVideoChannel, std::string > & (mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel,std::string>::*)(const struct mrpt::typemeta::internal::bimap<enum mrpt::hwdrivers::CKinect::TVideoChannel, std::string > &)) &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel, std::string>::operator=, "C++: mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CKinect::TVideoChannel, std::string>::operator=(const struct mrpt::typemeta::internal::bimap<enum mrpt::hwdrivers::CKinect::TVideoChannel, std::string > &) --> struct mrpt::typemeta::internal::bimap<enum mrpt::hwdrivers::CKinect::TVideoChannel, std::string > &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // mrpt::typemeta::internal::bimap file:mrpt/typemeta/TEnumType.h line:22
		pybind11::class_<mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS,std::string>, std::shared_ptr<mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS,std::string>>> cl(M("mrpt::typemeta::internal"), "bimap_mrpt_hwdrivers_CGPSInterface_PARSERS_std_string_t", "");
		cl.def( pybind11::init( [](){ return new mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS,std::string>(); } ) );
		cl.def( pybind11::init( [](mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS,std::string> const &o){ return new mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS,std::string>(o); } ) );
		cl.def_readwrite("m_k2v", &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS,std::string>::m_k2v);
		cl.def_readwrite("m_v2k", &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS,std::string>::m_v2k);
		cl.def("direct", (bool (mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS,std::string>::*)(const enum mrpt::hwdrivers::CGPSInterface::PARSERS &, std::string &) const) &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS, std::string>::direct, "C++: mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS, std::string>::direct(const enum mrpt::hwdrivers::CGPSInterface::PARSERS &, std::string &) const --> bool", pybind11::arg("k"), pybind11::arg("out_v"));
		cl.def("inverse", (bool (mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS,std::string>::*)(const std::string &, enum mrpt::hwdrivers::CGPSInterface::PARSERS &) const) &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS, std::string>::inverse, "C++: mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS, std::string>::inverse(const std::string &, enum mrpt::hwdrivers::CGPSInterface::PARSERS &) const --> bool", pybind11::arg("v"), pybind11::arg("out_k"));
		cl.def("insert", (void (mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS,std::string>::*)(const enum mrpt::hwdrivers::CGPSInterface::PARSERS &, const std::string &)) &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS, std::string>::insert, "C++: mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS, std::string>::insert(const enum mrpt::hwdrivers::CGPSInterface::PARSERS &, const std::string &) --> void", pybind11::arg("k"), pybind11::arg("v"));
		cl.def("assign", (struct mrpt::typemeta::internal::bimap<enum mrpt::hwdrivers::CGPSInterface::PARSERS, std::string > & (mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS,std::string>::*)(const struct mrpt::typemeta::internal::bimap<enum mrpt::hwdrivers::CGPSInterface::PARSERS, std::string > &)) &mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS, std::string>::operator=, "C++: mrpt::typemeta::internal::bimap<mrpt::hwdrivers::CGPSInterface::PARSERS, std::string>::operator=(const struct mrpt::typemeta::internal::bimap<enum mrpt::hwdrivers::CGPSInterface::PARSERS, std::string > &) --> struct mrpt::typemeta::internal::bimap<enum mrpt::hwdrivers::CGPSInterface::PARSERS, std::string > &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}
