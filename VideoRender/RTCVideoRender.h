#ifndef __RTC_VIDEO_RENDER_H__
#define __RTC_VIDEO_RENDER_H__

class RTCVideoRender
{
public:
	RTCVideoRender(void) {};
	virtual ~RTCVideoRender(void) {};

	virtual void* GetHWND() = 0;
	virtual void OnChangeVideoSize(int width, int height) = 0;

	/*
	����ֵ
	0: ʹ�ô�����Ⱦ
	1: YUV420
	2: RGB565
	3: RGB888
	*/
	virtual int GetRawVideoType() {
		return 0;
	};

	/*
	���ؾ��������
	*/
	virtual void OnRawVideoData(const char*pData, int nLen, int nWidth, int nHeight) {
	};

};

#endif
