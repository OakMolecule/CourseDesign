#ifndef __BOOK_H
#define __BOOK_H

// 引入c++标准头文件iostream, sting
// 引入命名空间std
#include <iostream>
#include <string>
using namespace std;

int loadBook();

enum language	// 定义书本的正文语种
{
	cs_cz,		// 捷克语(捷克共和国)
	da_dk,		// 丹麦语(丹麦)
	de_at,		// 德语(奥地利)
	de_ch,		// 德语(瑞士)
	de_de,		// 德语(德国)
	el_gr,		// 希腊语(希腊)
	en_au,		// 英语(澳大利亚)
	en_ca,		// 英语(加拿大)
	en_dk,		// 英语(丹麦)
	en_fi,		// 英语(芬兰)
	en_gb,		// 英语(英国)
	en_hk,		// 英语(香港)
	en_id,		// 英语(印度尼西亚)
	en_ie,		// 英语(爱尔兰)
	en_il,		// 英语(以色列)
	en_in,		// 英语(印度)
	en_my,		// 英语(马来西亚)
	en_no,		// 英语(挪威)
	en_nz,		// 英语(新西兰)
	en_ph,		// 英语(菲律宾)
	en_sg,		// 英语(新加坡)
	en_th,		// 英语(泰国)
	en_us,		// 英语(美国)
	en_ww,		// 英语(全球)
	en_xa,		// 英语(阿拉伯)
	en_za,		// 英语(南非)
	es_ar,		// 西班牙语(阿根廷)
	es_cl,		// 西班牙语(智利)
	es_co,		// 西班牙语(哥伦比亚)
	es_es,		// 西班牙语(西班牙语)
	es_la,		// 西班牙语(拉丁美洲)
	es_mx,		// 西班牙语(墨西哥)
	es_pr,		// 西班牙语(波多黎各)
	es_us,		// 西班牙语(美国)
	fi_fi,		// 芬兰语(芬兰)
	fr_be,		// 法语(比利时)
	fr_ca,		// 法语(加拿大)
	fr_ch,		// 法语(瑞士)
	fr_fr,		// 法语(法国)
	fr_lu,		// 法语(卢森堡)
	he_il,		// 希伯来语(以色列)
	hu_hu,		// 匈牙利语(匈牙利)
	it_it,		// 意大利语(意大利)
	ja_jp,		// 日语(日本)
	ko_kr,		// 韩文(韩国)
	nl_be,		// 荷兰语(比利时)
	nl_nl,		// 荷兰语(荷兰)
	no_no,		// 挪威语(挪威)
	pl_pl,		// 波兰语(波兰)
	pt_br,		// 葡萄牙语(巴西)
	pt_pt,		// 葡萄牙语(葡萄牙)
	ru_ru,		// 俄语(俄罗斯)
	sl_sl,		// 斯洛文尼亚语
	sv_se,		// 瑞典语(瑞典)
	tr_tr,		// 土耳其语(土耳其)
	zh_hk,		// 繁体中文(香港)
	zh_tw,		// 繁体中文(台湾地区)
	zh_cn,		// 简体中文(中国)
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
	string title; 		// 定义string类型的书名Title
	int ISBN;			// 定义书本ISBN编号
	string press;		// 定义出版社Press
	enum language bookLanguage;
	int isBorrow;		// 定义书的外借状态，在库：1，借出：0
	static int count;
};

#endif // !__BOOK_H
