; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CSinCosTanGeneratorDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "sinCosTanGenerator.h"

ClassCount=3
Class1=CSinCosTanGeneratorApp
Class2=CSinCosTanGeneratorDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_SINCOSTANGENERATOR_DIALOG

[CLS:CSinCosTanGeneratorApp]
Type=0
HeaderFile=sinCosTanGenerator.h
ImplementationFile=sinCosTanGenerator.cpp
Filter=N

[CLS:CSinCosTanGeneratorDlg]
Type=0
HeaderFile=sinCosTanGeneratorDlg.h
ImplementationFile=sinCosTanGeneratorDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_GENERATE_COS

[CLS:CAboutDlg]
Type=0
HeaderFile=sinCosTanGeneratorDlg.h
ImplementationFile=sinCosTanGeneratorDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_SINCOSTANGENERATOR_DIALOG]
Type=1
Class=CSinCosTanGeneratorDlg
ControlCount=6
Control1=IDCANCEL,button,1342242816
Control2=IDC_RESULT,edit,1353777348
Control3=IDC_STATIC,static,1342308352
Control4=IDC_GENERATE_SIN,button,1342242816
Control5=IDC_GENERATE_COS,button,1342242816
Control6=IDC_GENERATE_TAN,button,1342242816

