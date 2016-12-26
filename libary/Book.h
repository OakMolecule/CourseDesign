#ifndef __BOOK_H
#define __BOOK_H

// ����c++��׼ͷ�ļ�iostream, sting
// ���������ռ�std
#include <iostream>
#include <string>
using namespace std;

int loadBook();

enum language	// �����鱾����������
{
	cs_cz,		// �ݿ���(�ݿ˹��͹�)
	da_dk,		// ������(����)
	de_at,		// ����(�µ���)
	de_ch,		// ����(��ʿ)
	de_de,		// ����(�¹�)
	el_gr,		// ϣ����(ϣ��)
	en_au,		// Ӣ��(�Ĵ�����)
	en_ca,		// Ӣ��(���ô�)
	en_dk,		// Ӣ��(����)
	en_fi,		// Ӣ��(����)
	en_gb,		// Ӣ��(Ӣ��)
	en_hk,		// Ӣ��(���)
	en_id,		// Ӣ��(ӡ��������)
	en_ie,		// Ӣ��(������)
	en_il,		// Ӣ��(��ɫ��)
	en_in,		// Ӣ��(ӡ��)
	en_my,		// Ӣ��(��������)
	en_no,		// Ӣ��(Ų��)
	en_nz,		// Ӣ��(������)
	en_ph,		// Ӣ��(���ɱ�)
	en_sg,		// Ӣ��(�¼���)
	en_th,		// Ӣ��(̩��)
	en_us,		// Ӣ��(����)
	en_ww,		// Ӣ��(ȫ��)
	en_xa,		// Ӣ��(������)
	en_za,		// Ӣ��(�Ϸ�)
	es_ar,		// ��������(����͢)
	es_cl,		// ��������(����)
	es_co,		// ��������(���ױ���)
	es_es,		// ��������(��������)
	es_la,		// ��������(��������)
	es_mx,		// ��������(ī����)
	es_pr,		// ��������(�������)
	es_us,		// ��������(����)
	fi_fi,		// ������(����)
	fr_be,		// ����(����ʱ)
	fr_ca,		// ����(���ô�)
	fr_ch,		// ����(��ʿ)
	fr_fr,		// ����(����)
	fr_lu,		// ����(¬ɭ��)
	he_il,		// ϣ������(��ɫ��)
	hu_hu,		// ��������(������)
	it_it,		// �������(�����)
	ja_jp,		// ����(�ձ�)
	ko_kr,		// ����(����)
	nl_be,		// ������(����ʱ)
	nl_nl,		// ������(����)
	no_no,		// Ų����(Ų��)
	pl_pl,		// ������(����)
	pt_br,		// ��������(����)
	pt_pt,		// ��������(������)
	ru_ru,		// ����(����˹)
	sl_sl,		// ˹����������
	sv_se,		// �����(���)
	tr_tr,		// ��������(������)
	zh_hk,		// ��������(���)
	zh_tw,		// ��������(̨�����)
	zh_cn,		// ��������(�й�)
};

class Book
{
public:
	Book();
	Book(string temp_title, long int ISBN, string temp_press);
	~Book();
	int saveBook();
	friend int loadBook();
	void infoBook();
	Book * Next;

private:
	string title; 		// ����string���͵�����Title
	int ISBN;			// �����鱾ISBN���
	string press;		// ���������Press
	enum language bookLanguage;
	int isBorrow;		// ����������״̬���ڿ⣺1�������0
	static int count;
};

#endif // !__BOOK_H
