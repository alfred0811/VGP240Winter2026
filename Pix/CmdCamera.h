//#pragma once
//
//#include "Command.h"
//
//class CmdSetCameraPosition : public Command
//{
//public:
//	const char* GetName() override
//	{
//		return "SetCameraPosition";
//	}
//	const char* GetDescription() override
//	{
//		return
//			"SetCameraPosition(x, y, z)"
//			"\n"
//			"- sets the camera position";
//	}
//	bool Execute(const std::vector<std::string>& params) override;
//};
//class CmdSetCameraDirection : public Command
//{
//public:
//	const char* GetName() override
//	{
//		return "SetCameraDirection";
//	}
//	const char* GetDescription() override
//	{
//		return
//			"SetCameraDirection(x, y, z)"
//			"\n"
//			"- sets the camera direction";
//	}
//	bool Execute(const std::vector<std::string>& params) override;
//};
//class CmdSetCameraNear : public Command
//{
//public:
//	const char* GetName() override
//	{
//		return "SetCameraNear";
//	}
//	const char* GetDescription() override
//	{
//		return
//			"SetCameraNear(nearPlane)"
//			"\n"
//			"- sets the camera near plane";
//	}
//	bool Execute(const std::vector<std::string>& params) override;
//};
//class CmdSetCameraFar : public Command
//{
//public:
//	const char* GetName() override
//	{
//		return "SetCameraFar";
//	}
//	const char* GetDescription() override
//	{
//		return
//			"SetCameraFar(farPlane)"
//			"\n"
//			"- sets the camera far plane";
//	}
//	bool Execute(const std::vector<std::string>& params) override;
//};
//
//void SetPosition(const Vector3& pos);
//void SetDirection(const Vector3& dir);
//void SetNearPlane(float nearPlane);
//void SetFarPlane(float farPlane);
//void SetFOV(float fov);