
// Dialog2.0Dlg.h: 头文件
//

#pragma once

//运算符
enum Calculator_Flag {
	FLAG_JIA,
	FLAG_JIAN,
	FLAG_CHENG,
	FLAG_CHU,
	FLAG_MOD,
	FLAG_LOGNX,
	FLAG_NFANG,
	FLAG_KAINFANG,//双目运算
	FLAG_PINGFANG,
	FLAG_KAIFANG,
	FLAG_LIFANG,
	FLAG_KAILIFANG,

	FLAG_HTD,
	FLAG_OTD,
	FLAG_BTD,
	FLAG_H,
	FLAG_O,
	FLAG_B,

	FLAG_JIECHENG,
	FLAG_LNX,
	FLAG_EX,
	FLAG_SINX,
	FLAG_COSX,
	FLAG_TANX,//单目运算
};


// CDialog20Dlg 对话框
class CDialog20Dlg : public CDialogEx
{
// 构造
public:
	CDialog20Dlg(CWnd* pParent = nullptr);	// 标准构造函数
	void SaveFirstValue();//保存第一个输入值,双目计算
	void Calculator();//计算

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG20_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()




private:
	CString mStr;				//编辑框1内的字符串
	CString mStr1;				//编辑框2内的字符串
	CString mStr2;
	CString mStr3;
	CString mStr4;
	CString mStr5;
	CString mStr6;
	CString mStr7;
	CString mStr8;

	CString mTempStr;           //暂存输入数和运算符

	double mNum1;				//输入的2个值
	double mNum2;
	Calculator_Flag mFlag;		//运算符号
public:
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton0();
	afx_msg void OnBnClickedButtonH11();
	afx_msg void OnBnClickedButtonH12();
	afx_msg void OnBnClickedButtonH13();
	afx_msg void OnBnClickedButtonH14();
	afx_msg void OnBnClickedButtonH15();
	afx_msg void OnBnClickedButtonH16();
	afx_msg void OnBnClickedButtondot();
	afx_msg void OnBnClickedButtonBack();
	afx_msg void OnBnClickedButtonClear();
	afx_msg void OnBnClickedButtonClearall();
	afx_msg void OnBnClickedButtondengyu();
	afx_msg void OnBnClickedButtonjia();
	afx_msg void OnBnClickedButtonjian();
	afx_msg void OnBnClickedButtoncheng();
	afx_msg void OnBnClickedButtonchu();
	afx_msg void OnBnClickedButtonmod();
	afx_msg void OnBnClickedButtonlognx();
	afx_msg void OnBnClickedButtonngenx();
	afx_msg void OnBnClickedButtonxn();
	afx_msg void OnBnClickedButton3genx();
	afx_msg void OnBnClickedButtonx3();
	afx_msg void OnBnClickedButton2genx();
	afx_msg void OnBnClickedButtonx2();
	afx_msg void OnBnClickedButtonjiecheng();
	afx_msg void OnBnClickedButtonlnx();
	afx_msg void OnBnClickedButtonex();
	afx_msg void OnBnClickedButtonsinx();
	afx_msg void OnBnClickedButtoncosx();
	afx_msg void OnBnClickedButtontanx();
	afx_msg void OnBnClickedButtonBtd();
	afx_msg void OnBnClickedButtonOtd();
	afx_msg void OnBnClickedButtonB();
	afx_msg void OnBnClickedButtonO();
	afx_msg void OnBnClickedButtonHtd();
	afx_msg void OnBnClickedButtonH();
};
