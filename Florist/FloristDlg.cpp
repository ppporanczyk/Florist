// FloristDlg.cpp : implementation file
//

#include "pch.h"
#include "Florist.h"
#include "FloristDlg.h"
#include "afxdialogex.h"


// CFloristDlg dialog

IMPLEMENT_DYNAMIC(CFloristDlg, CDialog)

CFloristDlg::CFloristDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(ID_FLORIST, pParent)
	, m_nTulipan(0)
	, m_nRoza(0)
	, m_nFrezja(0)
	, m_nRabat(0)
	, m_nBrak(0)
{

}

CFloristDlg::~CFloristDlg()
{
}

void CFloristDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, ID_TULIPAN, m_nTulipan);
	DDX_Text(pDX, ID_ROZA, m_nRoza);
	DDX_Text(pDX, ID_FREZJA, m_nFrezja);
	DDX_Text(pDX, ID_RABAT, m_nRabat);
	DDX_Control(pDX, ID_SUMA, m_Suma);
	DDX_Control(pDX, ID_CENA, m_nCena);
	DDX_Radio(pDX, ID_BRAK, m_nBrak);
}


BEGIN_MESSAGE_MAP(CFloristDlg, CDialog)
	ON_BN_CLICKED(ID_CENA, &CFloristDlg::OnBnClickedCena)
	ON_BN_CLICKED(ID_OK, &CFloristDlg::OnBnClickedOk)
END_MESSAGE_MAP()


void CFloristDlg::OnBnClickedCena()
{
	UpdateData();
	double rabat = 0;
	double suma;
	if (m_nRabat >= 0 && m_nRabat < 100) {
		rabat = (100 - m_nRabat) * 0.01;
		suma = 4 * m_nTulipan + 3 * m_nRoza + 2 * m_nFrezja + m_nBrak;
		if (rabat)
			suma *= rabat;
	}
	else if (m_nRabat == 100)
		suma=0;
	else {
		AfxMessageBox(L"Rabat musi byc liczba calkowita z zakresu 0-100");
		return;
	}
	

	CString str; str.Format(L"%.2f", suma);
	CWnd* pWnd = GetDlgItem(ID_SUMA);
	pWnd->SetWindowTextW(str);
}


void CFloristDlg::OnBnClickedOk()
{
	UpdateData();
	CFloristDlg::OnOK();
}

