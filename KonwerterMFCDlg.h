
// KonwerterMFCDlg.h : header file
//

#pragma once

#define _AFXDLL

// CKonwerterMFCDlg dialog
class CKonwerterMFCDlg : public CDialogEx
{
// Construction
public:
	CKonwerterMFCDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_KONWERTERMFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	int m_nSelectedSystemCombo1;
	int m_nSelectedSystemCombo2;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnCbnSelchangeCombo2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit1();
	CString DecimalToBinary(int decimalValue);
};
