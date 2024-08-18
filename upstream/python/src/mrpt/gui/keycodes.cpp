#include <mrpt/gui/keycodes.h>

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

void bind_mrpt_gui_keycodes(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// mrpt::gui::mrptKeyCode file:mrpt/gui/keycodes.h line:22
	pybind11::enum_<mrpt::gui::mrptKeyCode>(M("mrpt::gui"), "mrptKeyCode", pybind11::arithmetic(), "")
		.value("MRPTK_BACK", mrpt::gui::MRPTK_BACK)
		.value("MRPTK_TAB", mrpt::gui::MRPTK_TAB)
		.value("MRPTK_RETURN", mrpt::gui::MRPTK_RETURN)
		.value("MRPTK_ESCAPE", mrpt::gui::MRPTK_ESCAPE)
		.value("MRPTK_SPACE", mrpt::gui::MRPTK_SPACE)
		.value("MRPTK_DELETE", mrpt::gui::MRPTK_DELETE)
		.value("MRPTK_START", mrpt::gui::MRPTK_START)
		.value("MRPTK_LBUTTON", mrpt::gui::MRPTK_LBUTTON)
		.value("MRPTK_RBUTTON", mrpt::gui::MRPTK_RBUTTON)
		.value("MRPTK_CANCEL", mrpt::gui::MRPTK_CANCEL)
		.value("MRPTK_MBUTTON", mrpt::gui::MRPTK_MBUTTON)
		.value("MRPTK_CLEAR", mrpt::gui::MRPTK_CLEAR)
		.value("MRPTK_SHIFT", mrpt::gui::MRPTK_SHIFT)
		.value("MRPTK_ALT", mrpt::gui::MRPTK_ALT)
		.value("MRPTK_CONTROL", mrpt::gui::MRPTK_CONTROL)
		.value("MRPTK_MENU", mrpt::gui::MRPTK_MENU)
		.value("MRPTK_PAUSE", mrpt::gui::MRPTK_PAUSE)
		.value("MRPTK_CAPITAL", mrpt::gui::MRPTK_CAPITAL)
		.value("MRPTK_END", mrpt::gui::MRPTK_END)
		.value("MRPTK_HOME", mrpt::gui::MRPTK_HOME)
		.value("MRPTK_LEFT", mrpt::gui::MRPTK_LEFT)
		.value("MRPTK_UP", mrpt::gui::MRPTK_UP)
		.value("MRPTK_RIGHT", mrpt::gui::MRPTK_RIGHT)
		.value("MRPTK_DOWN", mrpt::gui::MRPTK_DOWN)
		.value("MRPTK_SELECT", mrpt::gui::MRPTK_SELECT)
		.value("MRPTK_PRINT", mrpt::gui::MRPTK_PRINT)
		.value("MRPTK_EXECUTE", mrpt::gui::MRPTK_EXECUTE)
		.value("MRPTK_SNAPSHOT", mrpt::gui::MRPTK_SNAPSHOT)
		.value("MRPTK_INSERT", mrpt::gui::MRPTK_INSERT)
		.value("MRPTK_HELP", mrpt::gui::MRPTK_HELP)
		.value("MRPTK_NUMPAD0", mrpt::gui::MRPTK_NUMPAD0)
		.value("MRPTK_NUMPAD1", mrpt::gui::MRPTK_NUMPAD1)
		.value("MRPTK_NUMPAD2", mrpt::gui::MRPTK_NUMPAD2)
		.value("MRPTK_NUMPAD3", mrpt::gui::MRPTK_NUMPAD3)
		.value("MRPTK_NUMPAD4", mrpt::gui::MRPTK_NUMPAD4)
		.value("MRPTK_NUMPAD5", mrpt::gui::MRPTK_NUMPAD5)
		.value("MRPTK_NUMPAD6", mrpt::gui::MRPTK_NUMPAD6)
		.value("MRPTK_NUMPAD7", mrpt::gui::MRPTK_NUMPAD7)
		.value("MRPTK_NUMPAD8", mrpt::gui::MRPTK_NUMPAD8)
		.value("MRPTK_NUMPAD9", mrpt::gui::MRPTK_NUMPAD9)
		.value("MRPTK_MULTIPLY", mrpt::gui::MRPTK_MULTIPLY)
		.value("MRPTK_ADD", mrpt::gui::MRPTK_ADD)
		.value("MRPTK_SEPARATOR", mrpt::gui::MRPTK_SEPARATOR)
		.value("MRPTK_SUBTRACT", mrpt::gui::MRPTK_SUBTRACT)
		.value("MRPTK_DECIMAL", mrpt::gui::MRPTK_DECIMAL)
		.value("MRPTK_DIVIDE", mrpt::gui::MRPTK_DIVIDE)
		.value("MRPTK_F1", mrpt::gui::MRPTK_F1)
		.value("MRPTK_F2", mrpt::gui::MRPTK_F2)
		.value("MRPTK_F3", mrpt::gui::MRPTK_F3)
		.value("MRPTK_F4", mrpt::gui::MRPTK_F4)
		.value("MRPTK_F5", mrpt::gui::MRPTK_F5)
		.value("MRPTK_F6", mrpt::gui::MRPTK_F6)
		.value("MRPTK_F7", mrpt::gui::MRPTK_F7)
		.value("MRPTK_F8", mrpt::gui::MRPTK_F8)
		.value("MRPTK_F9", mrpt::gui::MRPTK_F9)
		.value("MRPTK_F10", mrpt::gui::MRPTK_F10)
		.value("MRPTK_F11", mrpt::gui::MRPTK_F11)
		.value("MRPTK_F12", mrpt::gui::MRPTK_F12)
		.value("MRPTK_F13", mrpt::gui::MRPTK_F13)
		.value("MRPTK_F14", mrpt::gui::MRPTK_F14)
		.value("MRPTK_F15", mrpt::gui::MRPTK_F15)
		.value("MRPTK_F16", mrpt::gui::MRPTK_F16)
		.value("MRPTK_F17", mrpt::gui::MRPTK_F17)
		.value("MRPTK_F18", mrpt::gui::MRPTK_F18)
		.value("MRPTK_F19", mrpt::gui::MRPTK_F19)
		.value("MRPTK_F20", mrpt::gui::MRPTK_F20)
		.value("MRPTK_F21", mrpt::gui::MRPTK_F21)
		.value("MRPTK_F22", mrpt::gui::MRPTK_F22)
		.value("MRPTK_F23", mrpt::gui::MRPTK_F23)
		.value("MRPTK_F24", mrpt::gui::MRPTK_F24)
		.value("MRPTK_NUMLOCK", mrpt::gui::MRPTK_NUMLOCK)
		.value("MRPTK_SCROLL", mrpt::gui::MRPTK_SCROLL)
		.value("MRPTK_PAGEUP", mrpt::gui::MRPTK_PAGEUP)
		.value("MRPTK_PAGEDOWN", mrpt::gui::MRPTK_PAGEDOWN)
		.value("MRPTK_NUMPAD_SPACE", mrpt::gui::MRPTK_NUMPAD_SPACE)
		.value("MRPTK_NUMPAD_TAB", mrpt::gui::MRPTK_NUMPAD_TAB)
		.value("MRPTK_NUMPAD_ENTER", mrpt::gui::MRPTK_NUMPAD_ENTER)
		.value("MRPTK_NUMPAD_F1", mrpt::gui::MRPTK_NUMPAD_F1)
		.value("MRPTK_NUMPAD_F2", mrpt::gui::MRPTK_NUMPAD_F2)
		.value("MRPTK_NUMPAD_F3", mrpt::gui::MRPTK_NUMPAD_F3)
		.value("MRPTK_NUMPAD_F4", mrpt::gui::MRPTK_NUMPAD_F4)
		.value("MRPTK_NUMPAD_HOME", mrpt::gui::MRPTK_NUMPAD_HOME)
		.value("MRPTK_NUMPAD_LEFT", mrpt::gui::MRPTK_NUMPAD_LEFT)
		.value("MRPTK_NUMPAD_UP", mrpt::gui::MRPTK_NUMPAD_UP)
		.value("MRPTK_NUMPAD_RIGHT", mrpt::gui::MRPTK_NUMPAD_RIGHT)
		.value("MRPTK_NUMPAD_DOWN", mrpt::gui::MRPTK_NUMPAD_DOWN)
		.value("MRPTK_NUMPAD_PAGEUP", mrpt::gui::MRPTK_NUMPAD_PAGEUP)
		.value("MRPTK_NUMPAD_PAGEDOWN", mrpt::gui::MRPTK_NUMPAD_PAGEDOWN)
		.value("MRPTK_NUMPAD_END", mrpt::gui::MRPTK_NUMPAD_END)
		.value("MRPTK_NUMPAD_BEGIN", mrpt::gui::MRPTK_NUMPAD_BEGIN)
		.value("MRPTK_NUMPAD_INSERT", mrpt::gui::MRPTK_NUMPAD_INSERT)
		.value("MRPTK_NUMPAD_DELETE", mrpt::gui::MRPTK_NUMPAD_DELETE)
		.value("MRPTK_NUMPAD_EQUAL", mrpt::gui::MRPTK_NUMPAD_EQUAL)
		.value("MRPTK_NUMPAD_MULTIPLY", mrpt::gui::MRPTK_NUMPAD_MULTIPLY)
		.value("MRPTK_NUMPAD_ADD", mrpt::gui::MRPTK_NUMPAD_ADD)
		.value("MRPTK_NUMPAD_SEPARATOR", mrpt::gui::MRPTK_NUMPAD_SEPARATOR)
		.value("MRPTK_NUMPAD_SUBTRACT", mrpt::gui::MRPTK_NUMPAD_SUBTRACT)
		.value("MRPTK_NUMPAD_DECIMAL", mrpt::gui::MRPTK_NUMPAD_DECIMAL)
		.value("MRPTK_NUMPAD_DIVIDE", mrpt::gui::MRPTK_NUMPAD_DIVIDE)
		.value("MRPTK_WINDOWS_LEFT", mrpt::gui::MRPTK_WINDOWS_LEFT)
		.value("MRPTK_WINDOWS_RIGHT", mrpt::gui::MRPTK_WINDOWS_RIGHT)
		.value("MRPTK_WINDOWS_MENU", mrpt::gui::MRPTK_WINDOWS_MENU)
		.value("MRPTK_COMMAND", mrpt::gui::MRPTK_COMMAND)
		.value("MRPTK_SPECIAL1", mrpt::gui::MRPTK_SPECIAL1)
		.value("MRPTK_SPECIAL2", mrpt::gui::MRPTK_SPECIAL2)
		.value("MRPTK_SPECIAL3", mrpt::gui::MRPTK_SPECIAL3)
		.value("MRPTK_SPECIAL4", mrpt::gui::MRPTK_SPECIAL4)
		.value("MRPTK_SPECIAL5", mrpt::gui::MRPTK_SPECIAL5)
		.value("MRPTK_SPECIAL6", mrpt::gui::MRPTK_SPECIAL6)
		.value("MRPTK_SPECIAL7", mrpt::gui::MRPTK_SPECIAL7)
		.value("MRPTK_SPECIAL8", mrpt::gui::MRPTK_SPECIAL8)
		.value("MRPTK_SPECIAL9", mrpt::gui::MRPTK_SPECIAL9)
		.value("MRPTK_SPECIAL10", mrpt::gui::MRPTK_SPECIAL10)
		.value("MRPTK_SPECIAL11", mrpt::gui::MRPTK_SPECIAL11)
		.value("MRPTK_SPECIAL12", mrpt::gui::MRPTK_SPECIAL12)
		.value("MRPTK_SPECIAL13", mrpt::gui::MRPTK_SPECIAL13)
		.value("MRPTK_SPECIAL14", mrpt::gui::MRPTK_SPECIAL14)
		.value("MRPTK_SPECIAL15", mrpt::gui::MRPTK_SPECIAL15)
		.value("MRPTK_SPECIAL16", mrpt::gui::MRPTK_SPECIAL16)
		.value("MRPTK_SPECIAL17", mrpt::gui::MRPTK_SPECIAL17)
		.value("MRPTK_SPECIAL18", mrpt::gui::MRPTK_SPECIAL18)
		.value("MRPTK_SPECIAL19", mrpt::gui::MRPTK_SPECIAL19)
		.value("MRPTK_SPECIAL20", mrpt::gui::MRPTK_SPECIAL20)
		.export_values();

;

	// mrpt::gui::mrptKeyModifier file:mrpt/gui/keycodes.h line:156
	pybind11::enum_<mrpt::gui::mrptKeyModifier>(M("mrpt::gui"), "mrptKeyModifier", pybind11::arithmetic(), "")
		.value("MRPTKMOD_NONE", mrpt::gui::MRPTKMOD_NONE)
		.value("MRPTKMOD_ALT", mrpt::gui::MRPTKMOD_ALT)
		.value("MRPTKMOD_CONTROL", mrpt::gui::MRPTKMOD_CONTROL)
		.value("MRPTKMOD_ALTGR", mrpt::gui::MRPTKMOD_ALTGR)
		.value("MRPTKMOD_SHIFT", mrpt::gui::MRPTKMOD_SHIFT)
		.value("MRPTKMOD_META", mrpt::gui::MRPTKMOD_META)
		.value("MRPTKMOD_WIN", mrpt::gui::MRPTKMOD_WIN)
		.value("MRPTKMOD_CMD", mrpt::gui::MRPTKMOD_CMD)
		.export_values();

;

}
