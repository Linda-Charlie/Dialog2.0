
// Dialog2.0Dlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "Dialog2.0.h"
#include "Dialog2.0Dlg.h"
#include "afxdialogex.h"

#define pi 3.1415926535898
#define std_angle (pi/180)

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
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


// CDialog20Dlg 对话框



CDialog20Dlg::CDialog20Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG20_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDialog20Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, mStr);//对应ID和对应字符串进行关联
	DDX_Text(pDX, IDC_EDIT2, mStr1);
	DDX_Text(pDX, IDC_EDIT3, mStr2);
	DDX_Text(pDX, IDC_EDIT4, mStr3);
	DDX_Text(pDX, IDC_EDIT5, mStr4);
	DDX_Text(pDX, IDC_EDIT6, mStr5);
	DDX_Text(pDX, IDC_EDIT7, mStr6);
	DDX_Text(pDX, IDC_EDIT8, mStr7);
	DDX_Text(pDX, IDC_EDIT9, mStr8);

}

BEGIN_MESSAGE_MAP(CDialog20Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_9, &CDialog20Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON_8, &CDialog20Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON_7, &CDialog20Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON_6, &CDialog20Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON_5, &CDialog20Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON_4, &CDialog20Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON_3, &CDialog20Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON_2, &CDialog20Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON_1, &CDialog20Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON_0, &CDialog20Dlg::OnBnClickedButton0)
	ON_BN_CLICKED(IDC_BUTTON_H11, &CDialog20Dlg::OnBnClickedButtonH11)
	ON_BN_CLICKED(IDC_BUTTON_H12, &CDialog20Dlg::OnBnClickedButtonH12)
	ON_BN_CLICKED(IDC_BUTTON_H13, &CDialog20Dlg::OnBnClickedButtonH13)
	ON_BN_CLICKED(IDC_BUTTON_H14, &CDialog20Dlg::OnBnClickedButtonH14)
	ON_BN_CLICKED(IDC_BUTTON_H15, &CDialog20Dlg::OnBnClickedButtonH15)
	ON_BN_CLICKED(IDC_BUTTON_H16, &CDialog20Dlg::OnBnClickedButtonH16)
	ON_BN_CLICKED(IDC_BUTTON_dot, &CDialog20Dlg::OnBnClickedButtondot)
	ON_BN_CLICKED(IDC_BUTTON_Back, &CDialog20Dlg::OnBnClickedButtonBack)
	ON_BN_CLICKED(IDC_BUTTON_Clear, &CDialog20Dlg::OnBnClickedButtonClear)
	ON_BN_CLICKED(IDC_BUTTON_ClearAll, &CDialog20Dlg::OnBnClickedButtonClearall)
	ON_BN_CLICKED(IDC_BUTTON_dengyu, &CDialog20Dlg::OnBnClickedButtondengyu)
	ON_BN_CLICKED(IDC_BUTTON_jia, &CDialog20Dlg::OnBnClickedButtonjia)
	ON_BN_CLICKED(IDC_BUTTON_jian, &CDialog20Dlg::OnBnClickedButtonjian)
	ON_BN_CLICKED(IDC_BUTTON_cheng, &CDialog20Dlg::OnBnClickedButtoncheng)
	ON_BN_CLICKED(IDC_BUTTON_chu, &CDialog20Dlg::OnBnClickedButtonchu)
	ON_BN_CLICKED(IDC_BUTTON_mod, &CDialog20Dlg::OnBnClickedButtonmod)
	ON_BN_CLICKED(IDC_BUTTON_lognx, &CDialog20Dlg::OnBnClickedButtonlognx)
	ON_BN_CLICKED(IDC_BUTTON_ngenx, &CDialog20Dlg::OnBnClickedButtonngenx)
	ON_BN_CLICKED(IDC_BUTTON_xn, &CDialog20Dlg::OnBnClickedButtonxn)
	ON_BN_CLICKED(IDC_BUTTON_3genx, &CDialog20Dlg::OnBnClickedButton3genx)
	ON_BN_CLICKED(IDC_BUTTON_x3, &CDialog20Dlg::OnBnClickedButtonx3)
	ON_BN_CLICKED(IDC_BUTTON_2genx, &CDialog20Dlg::OnBnClickedButton2genx)
	ON_BN_CLICKED(IDC_BUTTON_x2, &CDialog20Dlg::OnBnClickedButtonx2)
	ON_BN_CLICKED(IDC_BUTTON_jiecheng, &CDialog20Dlg::OnBnClickedButtonjiecheng)
	ON_BN_CLICKED(IDC_BUTTON_lnx, &CDialog20Dlg::OnBnClickedButtonlnx)
	ON_BN_CLICKED(IDC_BUTTON_ex, &CDialog20Dlg::OnBnClickedButtonex)
	ON_BN_CLICKED(IDC_BUTTON_sinx, &CDialog20Dlg::OnBnClickedButtonsinx)
	ON_BN_CLICKED(IDC_BUTTON_cosx, &CDialog20Dlg::OnBnClickedButtoncosx)
	ON_BN_CLICKED(IDC_BUTTON_tanx, &CDialog20Dlg::OnBnClickedButtontanx)
	ON_BN_CLICKED(IDC_BUTTON_BTD, &CDialog20Dlg::OnBnClickedButtonBtd)
	ON_BN_CLICKED(IDC_BUTTON_OTD, &CDialog20Dlg::OnBnClickedButtonOtd)
	ON_BN_CLICKED(IDC_BUTTON_B, &CDialog20Dlg::OnBnClickedButtonB)
	ON_BN_CLICKED(IDC_BUTTON_O, &CDialog20Dlg::OnBnClickedButtonO)
	ON_BN_CLICKED(IDC_BUTTON_HTD, &CDialog20Dlg::OnBnClickedButtonHtd)
	ON_BN_CLICKED(IDC_BUTTON_H, &CDialog20Dlg::OnBnClickedButtonH)
END_MESSAGE_MAP()


// CDialog20Dlg 消息处理程序

BOOL CDialog20Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
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

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CDialog20Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CDialog20Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CDialog20Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



//保存第一个输入值,双目计算
void CDialog20Dlg::SaveFirstValue()
{
	UpdateData(TRUE);
	mNum1 = _wtof(mStr);//字符串转浮点数，赋值给第一个操作数
	mTempStr = mStr;
	mStr = L"";
	UpdateData(FALSE);
}

void CDialog20Dlg::Calculator()//等于调用
{
	UpdateData(TRUE);
	mNum2 = _wtof(mStr);//字符串转浮点数，赋值给第二个操作数
	double result = 0.0f;//结果初始化为零

	switch (mFlag)
	{
	case FLAG_JIA:						//加  
		result = mNum1 + mNum2;
		mTempStr = mTempStr + _T("+") + mStr + _T("=");
		break;
	case FLAG_JIAN:						//减 
		result = mNum1 - mNum2;
		mTempStr = mTempStr + _T("-") + mStr + _T("=");
		break;
	case FLAG_CHENG:					//乘  
		result = mNum1 * mNum2;
		mTempStr = mTempStr + _T("x") + mStr + _T("=");
		break;
	case FLAG_CHU:						//除  
		if (mNum2 == 0.0f)
		{
			result = mNum1;
			mTempStr = _T("---除数不能为0！---");
		}
		else
		{
			result = mNum1 / mNum2;
			mTempStr = mTempStr + _T("/") + mStr + _T("=");
		}
		break;
	case FLAG_MOD:						//mod
		result = (int)mNum1 % (int)mNum2;
		mTempStr = mTempStr + _T("%") + mStr + _T("=");
		break;
	case FLAG_NFANG:					//n方
		result = pow(mNum1, mNum2);
		mTempStr = mTempStr + _T("^") + mStr + _T("=");
		break;
	case FLAG_KAINFANG:					//开n方
		result = pow(mNum1, 1.0 / mNum2);               //注意开方不能用1！不然除出来是零
		mTempStr = mStr + _T("√") + mTempStr + _T("=");
		break;
	case FLAG_LOGNX:					//lognx
		result = log(mNum2) / log(mNum1);
		mTempStr = _T("log") + mTempStr + _T("(") + mStr + _T(")=");
		break;

	//特殊处理：只要点击等号，就可以连续开方或乘方
	case FLAG_PINGFANG:					//平方 
		result = mNum2 * mNum2;
		mTempStr = mTempStr + _T("^2=");
		break;
	case FLAG_KAIFANG:					//开方  
		result = sqrt(mNum2);
		mTempStr = _T("2√") + mTempStr + _T("=");
		break;
	case FLAG_LIFANG:					//立方 
		result = mNum2 * mNum2 * mNum2;
		mTempStr = mTempStr + _T("^3=");
		break;
	case FLAG_KAILIFANG:			    //开立方  
		result = pow(mNum2, 1.0 / 3);
		mTempStr = _T("3√") + mTempStr + _T("=");
		break;

	default:
		break;
	}
	if (result - int(result) <= 1e-5)
	{
		mStr.Format(L"%d", (int)result);//如果浮点数是个整数，就显示为整数
	}
	else
	{
		mStr.Format(L"%f", result);//否则显示为浮点数
	}
	mTempStr += mStr;

	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;

	UpdateData(FALSE);

	mNum1 = result;//结果置为下一次计算的第一个操作数
	mNum2 = 0.0f;//第二个操作数置为零

}


//数
void CDialog20Dlg::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"9";
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"8";
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"7";
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"6";
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"5";
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"4";
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"3";
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"2";
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"1";
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButton0()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"0";
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButtonH11()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"A";
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButtonH12()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"B";
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButtonH13()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"C";
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButtonH14()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"D";
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButtonH15()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"E";
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButtonH16()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"F";
	UpdateData(FALSE);
}


//其他
void CDialog20Dlg::OnBnClickedButtondot()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	//如果没有小数点，则加上一个小数点，如果已有小数点就忽略此次的小数点，保证最多只有1个  
	if (-1 == mStr.Find(L'.'))
	{
		mStr += L".";
	}
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButtonBack()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	if (!mStr.IsEmpty()) {
		mStr = mStr.Left(mStr.GetLength() - 1);
	}
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButtonClear()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = L"";         //编辑框置空
	mNum1 = 0.0f;       //输入数归零
	mNum2 = 0.0f;
	mFlag = FLAG_JIA;   //可以略去
	UpdateData(FALSE);
}

void CDialog20Dlg::OnBnClickedButtonClearall()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = L"";
	mStr1 = L"";
	mStr2 = L"";
	mStr3 = L"";
	mStr4 = L"";
	mStr5 = L"";
	mStr6 = L"";
	mStr7 = L"";
	mStr8 = L"";
	mNum1 = 0.0f;
	mNum2 = 0.0f;
	mFlag = FLAG_JIA;   //同上
	UpdateData(FALSE);

}


//双目操作符
void CDialog20Dlg::OnBnClickedButtondengyu()
{
	// TODO: 在此添加控件通知处理程序代码
	Calculator();
}

void CDialog20Dlg::OnBnClickedButtonjia()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_JIA;
}

void CDialog20Dlg::OnBnClickedButtonjian()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_JIAN;
}

void CDialog20Dlg::OnBnClickedButtoncheng()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_CHENG;
}

void CDialog20Dlg::OnBnClickedButtonchu()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_CHU;
}

void CDialog20Dlg::OnBnClickedButtonmod()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_MOD;
}

void CDialog20Dlg::OnBnClickedButtonlognx()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_LOGNX;
}

void CDialog20Dlg::OnBnClickedButtonngenx()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_KAINFANG;
}

void CDialog20Dlg::OnBnClickedButtonxn()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_NFANG;
}


//单目操作符
void CDialog20Dlg::OnBnClickedButton3genx()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("3√") + mStr + _T("=");
	mNum1 = _wtof(mStr);
	double f = pow(mNum1, 1.0 / 3);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_KAILIFANG;
}

void CDialog20Dlg::OnBnClickedButtonx3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("^3=");
	mNum1 = _wtof(mStr);
	double f = mNum1 * mNum1 * mNum1;
	//如果浮点数其实是个整数,就显示为整数
	if (f - int(f) <= 1e-5)
	{
		mStr.Format(L"%d", (int)f);
	}
	else
	{
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_LIFANG;
}

void CDialog20Dlg::OnBnClickedButton2genx()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("√") + mStr + _T("=");
	mNum1 = _wtof(mStr);
	double f = sqrt(mNum1);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_KAIFANG;
}

void CDialog20Dlg::OnBnClickedButtonx2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("^2=");
	mNum1 = _wtof(mStr);
	double f = mNum1 * mNum1;
	//如果浮点数其实是个整数,就显示为整数
	if (f - int(f) <= 1e-5)
	{
		mStr.Format(L"%d", (int)f);
	}
	else
	{
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_PINGFANG;
}

void CDialog20Dlg::OnBnClickedButtonjiecheng()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("!=");
	mNum1 = _wtof(mStr);
	double f = 1;
	int index = (int)mNum1;
	while (index > 0) {
		f *= index;
		index = index - 1;
	}
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_JIECHENG;
}

void CDialog20Dlg::OnBnClickedButtonlnx()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("ln(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = log(mNum1);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_LNX;
}

void CDialog20Dlg::OnBnClickedButtonex()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("e^") + mStr + _T("=");
	mNum1 = _wtof(mStr);
	double f = pow(2.71828182845, mNum1);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_EX;
}

void CDialog20Dlg::OnBnClickedButtonsinx()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("sin(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = sin(mNum1 * std_angle);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_SINX;
}

void CDialog20Dlg::OnBnClickedButtoncosx()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("cos(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = cos(mNum1 * std_angle);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_COSX;
}

void CDialog20Dlg::OnBnClickedButtontanx()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("tan(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = sin(mNum1 * std_angle) / cos(mNum1 * std_angle);//没有直接的函数
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_TANX;
}
//进制转换
//二、八进制的数转换为十进制
int toD(CString m, int B) {
	int index = 0;//标记权重
	int result = 0;
	int length = m.GetLength();//长度，用于判断运算次数
	CString temp_num;
	int num = 0;
	while (length != 0) {
		temp_num = m.Right(1);
		num = _ttoi(temp_num);
		result = result + num * pow(B, index);
		index += 1;
		length -= 1;
		m = m.Left(length);
	}
	return result;
}
//int HtoD0(char a[], int B) {
//	int len, i, num;
//	int sum = 0;
//	len = strlen(a);                    //求得字符串长度
//	for (i = 0; i < len; i++) {
//
//		if (a[i] >= '0' && a[i] <= '9')
//
//			num = a[i] - '0';
//
//		else if (a[i] >= 'A' && a[i] <= 'F')
//
//			num = a[i] - 'A' + 10;
//
//		sum = sum * B + num;
//
//	}
//	return sum;
//}

void CDialog20Dlg::OnBnClickedButtonBtd()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("(") + mStr + _T(")2=");
	int result = toD(mStr, 2);
	double f = result;
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr = mTempStr + _T("(") + mStr + _T(")10");
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_BTD;
}

void CDialog20Dlg::OnBnClickedButtonOtd()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("(") + mStr + _T(")8=");
	int result = toD(mStr, 8);
	double f = result;
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr = mTempStr + _T("(") + mStr + _T(")10");
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_OTD;
}

//十进制转换为二、八进制的数
int Dto(int m, int B) {
	int index = 1;
	int result = 0;
	int temp_result = 0;
	while (m != 0) {
		result = result + (m % B) * index;
		m = m / B;
		index *= 10;
	}
	return result;
}

void CDialog20Dlg::OnBnClickedButtonB()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("=");
	mNum1 = _wtof(mStr);
	int result = Dto((int)mNum1, 2);
	double f = result;
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr = mTempStr + _T("(") + mStr + _T(")2");
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_B;

}

void CDialog20Dlg::OnBnClickedButtonO()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("=");
	mNum1 = _wtof(mStr);
	int result = Dto((int)mNum1, 8);
	double f = result;
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr = mTempStr + _T("(") + mStr + _T(")8");
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_O;
}

//十六进制转换为十进制
int HtoD(CString m) {
	int index = 0;
	int result = 0;
	int length = m.GetLength();
	CString temp_num;
	int num = 0;
	while (length != 0) {
		temp_num = m.Right(1);
		if (temp_num == "0") {
			num = 0;
		}
		else if (temp_num == "1") {
			num = 1;
		}
		else if (temp_num == "2") {
			num = 2;
		}
		else if (temp_num == "3") {
			num = 3;
		}
		else if (temp_num == "4") {
			num = 4;
		}
		else if (temp_num == "5") {
			num = 5;
		}
		else if (temp_num == "6") {
			num = 6;
		}
		else if (temp_num == "7") {
			num = 7;
		}
		else if (temp_num == "8") {
			num = 8;
		}
		else if (temp_num == "9") {
			num = 9;
		}
		else if (temp_num == "A") {
			num = 10;
		}
		else if (temp_num == "B") {
			num = 11;
		}
		else if (temp_num == "C") {
			num = 12;
		}
		else if (temp_num == "D") {
			num = 13;
		}
		else if (temp_num == "E") {
			num = 14;
		}
		else if (temp_num == "F") {
			num = 15;
		}
		result = result + num * pow(16, index);
		index += 1;
		length -= 1;
		m = m.Left(length);
	}
	return result;
}

void CDialog20Dlg::OnBnClickedButtonHtd()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("(") + mStr + _T(")16=");
	int result = HtoD(mStr);
	double f = result;
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr = mTempStr + _T("(") + mStr + _T(")10");
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_HTD;

}

//十进制转换为十六进制
CString DtoH(int m) {
	CString result = _T("");
	int index = 0;
	int temp_result = 0;
	while (m != 0) {
		index = m % 16;
		switch (index)
		{
		case 0:
			result = _T("0") + result;
			break;
		case 1:
			result = _T("1") + result;
			break;
		case 2:
			result = _T("2") + result;
			break;
		case 3:
			result = _T("3") + result;
			break;
		case 4:
			result = _T("4") + result;
			break;
		case 5:
			result = _T("5") + result;
			break;
		case 6:
			result = _T("6") + result;
			break;
		case 7:
			result = _T("7") + result;
			break;
		case 8:
			result = _T("8") + result;
			break;
		case 9:
			result = _T("9") + result;
			break;
		case 10:
			result = _T("A") + result;
			break;
		case 11:
			result = _T("B") + result;
			break;
		case 12:
			result = _T("C") + result;
			break;
		case 13:
			result = _T("D") + result;
			break;
		case 14:
			result = _T("E") + result;
			break;
		case 15:
			result = _T("F") + result;
			break;
		default:
			break;
		}
		m = m / 16;
	}
	return result;
}

void CDialog20Dlg::OnBnClickedButtonH()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("=");
	mNum1 = _wtof(mStr);
	mStr = DtoH((int)mNum1);
	mTempStr = mTempStr + _T("(") + mStr + _T(")16");
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum2 = 0.0f;
	mFlag = FLAG_H;

}
