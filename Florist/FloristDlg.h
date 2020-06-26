#pragma once


// CFloristDlg dialog

class CFloristDlg : public CDialog
{
	DECLARE_DYNAMIC(CFloristDlg)

public:
	CFloristDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CFloristDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = ID_FLORIST };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
private:
	int m_nTulipan;
	int m_nRoza;
	int m_nFrezja;
	int m_nRabat;
	int m_nBrak;
	CComboBox m_Suma;

public:
	CButton m_nCena;
	
	afx_msg void OnBnClickedCena();
	afx_msg void OnBnClickedOk();

};
