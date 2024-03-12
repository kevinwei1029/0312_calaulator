
// 0312_practice02Dlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "0312_practice02.h"
#include "0312_practice02Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMy0312practice02Dlg dialog



CMy0312practice02Dlg::CMy0312practice02Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MY0312_PRACTICE02_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMy0312practice02Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	m_txt = txt.c_str();
	DDX_Text(pDX, IDC_EDIT1, m_txt);
}

BEGIN_MESSAGE_MAP(CMy0312practice02Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON17, &CMy0312practice02Dlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CMy0312practice02Dlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON15, &CMy0312practice02Dlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CMy0312practice02Dlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON13, &CMy0312practice02Dlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CMy0312practice02Dlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON11, &CMy0312practice02Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CMy0312practice02Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON9, &CMy0312practice02Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CMy0312practice02Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON7, &CMy0312practice02Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CMy0312practice02Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON5, &CMy0312practice02Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CMy0312practice02Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON3, &CMy0312practice02Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMy0312practice02Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON20, &CMy0312practice02Dlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON19, &CMy0312practice02Dlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON21, &CMy0312practice02Dlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &CMy0312practice02Dlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON25, &CMy0312practice02Dlg::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON26, &CMy0312practice02Dlg::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON23, &CMy0312practice02Dlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON24, &CMy0312practice02Dlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON28, &CMy0312practice02Dlg::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON27, &CMy0312practice02Dlg::OnBnClickedButton27)
END_MESSAGE_MAP()


// CMy0312practice02Dlg message handlers

BOOL CMy0312practice02Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMy0312practice02Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMy0312practice02Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMy0312practice02Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

// ############## ¥|«h¹Bºâv2 ###############
#include <stdio.h>
#include <stdlib.h>

double Eval2(char* expr, char** end) {
	double Eval0(char*, char**);
	double res = 0;
	if (*(*end = expr) == '(') {
		res = Eval0(*end + 1, end);
		if (**end == ')') ++*end;
	}
	else { res = strtod(*end, end); }
	return res;
}

double Eval1(char* expr, char** end) {
	double res = Eval2(expr, end);
	while (**end == '*' || **end == '/')
		(**end == '*') ? (res *= Eval2(*end + 1, end)) : (res /= Eval2(*end + 1, end));
	return res;
}

double Eval0(char* expr, char** end) {
	double res = Eval1(expr, end);
	while (**end == '+' || **end == '-')
		res += (**end == '+') ? Eval1(*end + 1, end) : -Eval1(*end + 1, end);
	return res;
}
/*
int main() {
	char expr[128] = { 0 }, * pos = 0;
	printf("Exp : ");
	scanf("%s", expr);
	printf("Ans : %f\n", Eval0(expr, &pos));
}*/
// #################################

void CMy0312practice02Dlg::OnBnClickedButton17()  // +/-
{
	// TODO: Add your control notification handler code here
}


void CMy0312practice02Dlg::OnBnClickedButton18()  // 0
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	txt += "0";
	UpdateData(FALSE);
}


void CMy0312practice02Dlg::OnBnClickedButton15()  // .
{
	// TODO: Add your control notification handler code here
	addsymbol('.');
}


void CMy0312practice02Dlg::OnBnClickedButton16()  // =
{
	//addsymbol('=');
	int a, b;
	float c = 0;
	// part a : get the string from the edit box
	// part b : parser equation & extract parameter
	// part c : calculate the result
	UpdateData(TRUE);
	if (txt.find("^") != std::string::npos) {
		getresult();
		txt = std::to_string(pow(result, std::stod(txt.substr(txt.find("^") + 1))));
	}
	else {
		getresult();
		txt = std::to_string(result);
	}
	UpdateData(FALSE);
	// part d : display the result
}


void CMy0312practice02Dlg::OnBnClickedButton13()  // 1
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	txt += "1";
	UpdateData(FALSE);
}


void CMy0312practice02Dlg::OnBnClickedButton14()  // 2
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	txt += "2";
	UpdateData(FALSE);
}


void CMy0312practice02Dlg::OnBnClickedButton11()  // 3
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	txt += "3";
	UpdateData(FALSE);
}


void CMy0312practice02Dlg::OnBnClickedButton12()  // +(plus)
{
	// TODO: Add your control notification handler code here
	addsymbol('+');
}


void CMy0312practice02Dlg::OnBnClickedButton9()  // 4
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	txt += "4";
	UpdateData(FALSE);
}


void CMy0312practice02Dlg::OnBnClickedButton10()  // 5
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	txt += "5";
	UpdateData(FALSE);
}


void CMy0312practice02Dlg::OnBnClickedButton7()  // 6
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	txt += "6";
	UpdateData(FALSE);
}


void CMy0312practice02Dlg::OnBnClickedButton8()  // -(minus)
{
	// TODO: Add your control notification handler code here
	addsymbol('-');
}


void CMy0312practice02Dlg::OnBnClickedButton5()  // 7
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	txt += "7";
	UpdateData(FALSE);
}


void CMy0312practice02Dlg::OnBnClickedButton6()  // 8
{
	// TODO: Add your control notification handler code 
	UpdateData(TRUE);
	txt += "8";
	UpdateData(FALSE);
}


void CMy0312practice02Dlg::OnBnClickedButton3()  // 9
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	txt += "9";
	UpdateData(FALSE);
}


void CMy0312practice02Dlg::OnBnClickedButton4()  // *(multiply)
{
	// TODO: Add your control notification handler code here
	addsymbol('*');
}


void CMy0312practice02Dlg::OnBnClickedButton20()  // /(devide)
{
	// TODO: Add your control notification handler code here
	addsymbol('/');
}

void CMy0312practice02Dlg::OnBnClickedButton19()  // C(clear)
{
	// TODO: Add your control notification handler code here
	if (txt != "") {
		UpdateData(TRUE);
		txt = "";
		UpdateData(FALSE);
	}
}


void CMy0312practice02Dlg::OnBnClickedButton21()  // ((left bracket)
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	txt += '(';
	UpdateData(FALSE);
}


void CMy0312practice02Dlg::OnBnClickedButton22()  // )(right bracket)
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	txt += ')';
	UpdateData(FALSE);
}

void CMy0312practice02Dlg::addsymbol(char c) {
	if (txt.back() != '.' && txt.back() != '+' && txt.back() != '-' && txt.back() != '*' && txt.back() != '/' && txt.back() != '=' && txt != "") {
		UpdateData(TRUE);
		txt += c;
		UpdateData(FALSE);
	}
}

void CMy0312practice02Dlg::OnBnClickedButton25()  // %(persent)
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	getresult();
	txt = std::to_string(result*100) + "%";
	UpdateData(FALSE);
}


void CMy0312practice02Dlg::OnBnClickedButton26()  // reciprocal
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	getresult();
	txt = std::to_string(1 / result);
	UpdateData(FALSE);
}


void CMy0312practice02Dlg::OnBnClickedButton23()  // suqare
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	getresult();
	txt = std::to_string(result * result);
	UpdateData(FALSE);
}


void CMy0312practice02Dlg::OnBnClickedButton24()  // square root
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	getresult();
	txt = std::to_string(sqrt(result));
	UpdateData(FALSE);
}

void CMy0312practice02Dlg::getresult() {
	char expr[128] = { 0 }, * pos = 0;
	for (int i = 0; i < txt.length(); i++) {
		expr[i] = txt[i];
	}
	result = Eval0(expr, &pos);
}

void CMy0312practice02Dlg::OnBnClickedButton28()  // backspace
{
	// TODO: Add your control notification handler code here
	if (txt != "") {
		UpdateData(TRUE);
		if (txt.back() == '%')
			txt.clear();
		else
			txt.pop_back();
		UpdateData(FALSE);
	}
}

void CMy0312practice02Dlg::OnBnClickedButton27()  // pow
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	getresult();
	txt = "(" + std::to_string(result) + ")^";
	UpdateData(FALSE);
}
