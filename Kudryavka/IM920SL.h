#pragma once
#include <future>

class IM920SL
{
private:
	bool isSending;
public:
	IM920SL();
	~IM920SL();
	
	void Connect();
	void Disconnect();

	void SendCommand();
	void SendBroadCast();
};

