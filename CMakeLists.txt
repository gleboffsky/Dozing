cmake_minimum_required(VERSION 3.5)

project(Dozing)


set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
	ui_mainwindow.h
	ui_savetemplate.h
	ui_deletetemplate.h
	ui_settings.h
	savetemplate.cpp 
	savetemplate.ui
	savetemplate.h
	deletetemplate.cpp 
	deletetemplate.ui
	deletetemplate.h 
	settings.cpp
	settings.ui
	settings.h
	ListCalc.cpp
	ListCalc.h
	resources.qrc
)

add_executable(Dozing main.cpp)

#add_library(json-develop)