
// MilitaryChessClientView.h : CMilitaryChessClientView ��Ľӿ�
//

#pragma once


class CMilitaryChessClientView : public CView
{
protected: // �������л�����
	CMilitaryChessClientView();
	DECLARE_DYNCREATE(CMilitaryChessClientView)

// ����
public:
	CMilitaryChessClientDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMilitaryChessClientView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MilitaryChessClientView.cpp �еĵ��԰汾
inline CMilitaryChessClientDoc* CMilitaryChessClientView::GetDocument() const
   { return reinterpret_cast<CMilitaryChessClientDoc*>(m_pDocument); }
#endif

