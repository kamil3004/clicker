﻿# CMakeList.txt: projekt CMake dla elementu clicker, dołącz źródło i zdefiniuj
# tutaj logikę specyficzną dla projektu.
#
cmake_minimum_required (VERSION 3.8)

# Włącz przeładowywanie kodu XAML na gorąco dla kompilatorów MSVC, jeśli jest to obsługiwane.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("clicker")

# Dodaj źródło do pliku wykonywalnego tego projektu.
add_executable (clicker "clicker.cpp" Clicker_Model.cpp Clicker_Model.h Clicker_View.cpp Clicker_View.h Clicker_Controller.cpp Clicker_Controller.h)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET clicker PROPERTY CXX_STANDARD 20)
endif()

# TODO: Dodaj testy i zainstaluj elementy docelowe w razie potrzeby.
