
// MilitaryChessClientView.cpp : CMilitaryChessClientView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MilitaryChessClient.h"
#endif

#include "MilitaryChessClientDoc.h"
#include "MilitaryChessClientView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMilitaryChessClientView

IMPLEMENT_DYNCREATE(CMilitaryChessClientView, CView)

BEGIN_MESSAGE_MAP(CMilitaryChessClientView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMilitaryChessClientView ����/����

CMilitaryChessClientView::CMilitaryChessClientView()
{
	// TODO:  �ڴ˴���ӹ������

}

CMilitaryChessClientView::~CMilitaryChessClientView()
{
}

BOOL CMilitaryChessClientView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMilitaryChessClientView ����

void CMilitaryChessClientView::OnDraw(CDC* /*pDC*/)
{
	CMilitaryChessClientDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���

}


// CMilitaryChessClientView ��ӡ

BOOL CMilitaryChessClientView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMilitaryChessClientView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMilitaryChessClientView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMilitaryChessClientView ���

#ifdef _DEBUG
void CMilitaryChessClientView::AssertValid() const
{
	CView::AssertValid();
}

void CMilitaryChessClientView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMilitaryChessClientDoc* CMilitaryChessClientView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMilitaryChessClientDoc)));
	return (CMilitaryChessClientDoc*)m_pDocument;
}
#endif //_DEBUG


// CMilitaryChessClientView ��Ϣ�������
