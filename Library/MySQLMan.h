// MySQLMan.h: interface for the CMySQLMan class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYSQLMAN_H__4B2476BE_47D0_48FE_857C_FCA2930F863B__INCLUDED_)
#define AFX_MYSQLMAN_H__4B2476BE_47D0_48FE_857C_FCA2930F863B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#pragma comment(lib,"libmysql.lib")
#include <list>

typedef std::list<MYSQL *> CONNECTION_HANDLE_LIST;
typedef std::list<MYSQL *>::iterator ITER_CONNECTION_HANDLE_LIST;
#define CONNECTION_NUM 10 //ͬʱ�򿪵�������

class CMySQLMan
{
public:
	CMySQLMan();
	CMySQLMan(const char *host, const char *user, const char *password, const char *db, unsigned int port=3306);
	virtual ~CMySQLMan();
	
public:
	//static CMySQLMan* GetInstance();
	bool ConnectDB();       //�������ݿ�
	MYSQL_RES* SelectRecord(const char *szSql); //ѡ���¼�����ؽ����
	bool SelectDB(const char *szDB);   //ѡ�����ݿ�
	bool UpdateRecord(const char *szSql); //���¼�¼
	bool InsertRecord(const char *szSql); //�����¼
	bool DelRecord(const char *szSql);   //ɾ����¼
	BOOL IsEnd(MYSQL_RES *myquery);        //�Ƿ����
	void SeekData(MYSQL_RES *myquery, int offset);     //����ָ������
	void FreeRecord(MYSQL_RES *myquery);       //�ͷŽ����
	unsigned int GetFieldNum(MYSQL_RES *myquery);     //�õ��ֶ���
	MYSQL_ROW GetRecord(MYSQL_RES *myquery);      //�õ������һ����¼��
	my_ulonglong GetRowNum(MYSQL_RES *myquery);     //�õ���¼��
	char* OutErrors(MYSQL* pMySql);       //���������Ϣ
	char* GetState();       //������״̬
	char* GetServerInfo();      //��������Ϣ
	int GetProtocolInfo();      //Э����Ϣ
	char* GetHostInfo();      //������Ϣ
	char* GetClientInfo();      //�ͻ�����Ϣ
	char* GetFieldName(MYSQL_RES *myquery, int FieldNum);   //�ֶ���
	bool LockTable(const char *TableName, const char *Priority); //���ض�������
	bool UnlockTable();       //����
	bool SetCharset();
	//int CreateDB(char *db);     //�������ݿ⣬���ش�����Ϣ
	//int DropDB(char *db);      //ɾ�����ݿ�,���ش�����Ϣ
	MYSQL* GetIdleMySql();      //��ȡһ�����о����ʹ��
	void SetIdleMysql(MYSQL* pMySql);   //��ʹ�ö������ͷ�һ��ʹ����ϵľ�������뵽���ж���

public:
	//MYSQL   m_mysql;       //���ݿ����Ӿ��
	MYSQL_ROW m_row;        //��¼��(����)
	MYSQL_FIELD *m_field;       //�ֶ���Ϣ���ṹ�壩
	//������������
	CONNECTION_HANDLE_LIST m_lsBusyList;                //����ʹ�õ����Ӿ��
	CONNECTION_HANDLE_LIST m_lsIdleList;                //δʹ�õ����Ӿ��
	CRITICAL_SECTION m_csList;

public:
	char m_host[20];    //����
	char m_user[20];    //�û���
	char m_password[20];   //����
	char m_db[20];     //���ݿ���
	unsigned int m_port;   //�˿�
/*
private:
	static CMySQLMan *cMySQLMan;
	*/
};

//CMySQLMan* CMySQLMan::cMySQLMan = NULL;

#endif // !defined(AFX_MYSQLMAN_H__4B2476BE_47D0_48FE_857C_FCA2930F863B__INCLUDED_)