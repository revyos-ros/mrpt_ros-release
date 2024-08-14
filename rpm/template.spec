%bcond_without tests
%bcond_without weak_deps

%global __os_install_post %(echo '%{__os_install_post}' | sed -e 's!/usr/lib[^[:space:]]*/brp-python-bytecompile[[:space:]].*$!!g')
%global __provides_exclude_from ^/opt/ros/iron/.*$
%global __requires_exclude_from ^/opt/ros/iron/.*$

Name:           ros-iron-mrpt-libopengl
Version:        2.13.6
Release:        1%{?dist}%{?release_suffix}
Summary:        ROS mrpt_libopengl package

License:        BSD
URL:            https://www.mrpt.org/
Source0:        %{name}-%{version}.tar.gz

Requires:       ros-iron-mrpt-libbase
Requires:       ros-iron-mrpt-libposes
Requires:       ros-iron-ros-workspace
BuildRequires:  assimp-devel
BuildRequires:  cmake3
BuildRequires:  ffmpeg-free-devel
BuildRequires:  freeglut-devel
BuildRequires:  glfw-devel
BuildRequires:  libXrandr-devel
BuildRequires:  libXxf86vm-devel
BuildRequires:  libfreenect-devel
BuildRequires:  libfreenect-openni
BuildRequires:  libjpeg-turbo-devel
BuildRequires:  libpcap-devel
BuildRequires:  libudev-devel
BuildRequires:  libusbx-devel
BuildRequires:  mesa-libGL-devel
BuildRequires:  mesa-libGLU-devel
BuildRequires:  octomap-devel
BuildRequires:  opencv-devel
BuildRequires:  pkgconfig
BuildRequires:  pybind11-devel
BuildRequires:  python3-pip
BuildRequires:  ros-iron-ament-cmake
BuildRequires:  ros-iron-cv-bridge
BuildRequires:  ros-iron-mrpt-libbase
BuildRequires:  ros-iron-mrpt-libposes
BuildRequires:  ros-iron-rclcpp
BuildRequires:  ros-iron-ros-environment
BuildRequires:  ros-iron-rosbag2-storage
BuildRequires:  tinyxml2-devel
BuildRequires:  wxGTK3-devel
BuildRequires:  zlib-devel
BuildRequires:  ros-iron-ros-workspace
Provides:       %{name}-devel = %{version}-%{release}
Provides:       %{name}-doc = %{version}-%{release}
Provides:       %{name}-runtime = %{version}-%{release}

%description
Mobile Robot Programming Toolkit (MRPT) libraries (opengl/img C++ libraries).
This package contains: mrpt-opengl, mrpt-img

%prep
%autosetup -p1

%build
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree and source it.  It will set things like
# CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/iron/setup.sh" ]; then . "/opt/ros/iron/setup.sh"; fi
mkdir -p .obj-%{_target_platform} && cd .obj-%{_target_platform}
%cmake3 \
    -UINCLUDE_INSTALL_DIR \
    -ULIB_INSTALL_DIR \
    -USYSCONF_INSTALL_DIR \
    -USHARE_INSTALL_PREFIX \
    -ULIB_SUFFIX \
    -DCMAKE_INSTALL_PREFIX="/opt/ros/iron" \
    -DCMAKE_PREFIX_PATH="/opt/ros/iron" \
    -DSETUPTOOLS_DEB_LAYOUT=OFF \
%if !0%{?with_tests}
    -DBUILD_TESTING=OFF \
%endif
    ..

%make_build

%install
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree and source it.  It will set things like
# CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/iron/setup.sh" ]; then . "/opt/ros/iron/setup.sh"; fi
%make_install -C .obj-%{_target_platform}

%if 0%{?with_tests}
%check
# Look for a Makefile target with a name indicating that it runs tests
TEST_TARGET=$(%__make -qp -C .obj-%{_target_platform} | sed "s/^\(test\|check\):.*/\\1/;t f;d;:f;q0")
if [ -n "$TEST_TARGET" ]; then
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree and source it.  It will set things like
# CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/iron/setup.sh" ]; then . "/opt/ros/iron/setup.sh"; fi
CTEST_OUTPUT_ON_FAILURE=1 \
    %make_build -C .obj-%{_target_platform} $TEST_TARGET || echo "RPM TESTS FAILED"
else echo "RPM TESTS SKIPPED"; fi
%endif

%files
/opt/ros/iron

%changelog
* Wed Aug 14 2024 Jose-Luis Blanco-Claraco <joseluisblancoc@gmail.com> - 2.13.6-1
- Autogenerated by Bloom

