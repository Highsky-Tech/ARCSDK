# ARCSDK

### Version: 1.5.5

# SDK集成

本文主要介绍如何快速地将AR微课-SDK集成到您的项目中，按照如下步骤进行配置，就可以完成 SDK 的集成工作。

下面以Demo为例子，进行介绍：





##iOS



### 开发环境要求

- Xcode 9.0+。
- iOS 10.0 以上的 iPhone 或者 iPad 真机。
- 项目已配置有效的开发者签名。



### 集成ARSDK

您可以选择使用 CocoaPods 加载的方式，或者先下载 SDK，再将其导入到您当前的工程项目中。



#### CocoaPods -（推荐此方式）

##### 1.编辑 Podfile 文件

```CocoaPod
platform :ios, '9.0'
source 'https://github.com/CocoaPods/Specs.git'

target 'App' do
pod 'ARCSDK'
end
```

##### 2. 更新并安装 SDK

```CocoaPod
pod install
```

pod 命令执行完后，会生成集成了 SDK 的 `.xcworkspace` 后缀的工程文件，双击打开即可。





#### 手动集成

1. 下载ARSDK，下载完成后进行解压。

2. 打开您的 Xcode 工程项目，将ARSDK引用到项目中。

3. 同时，项目涉及引用其它第三方，请依次引用到项目中，如果项目中**已经引用过，则无需再次引用，项目中有即可**。

   以下第三方，也可**下载文件Zip包**，选择性下载后导入即可。

- AFNetworking
- YYImage
- YYImage/WebP
- MBProgressHUD
- MGSwipeTableCell
- ZFPlayer
- GPUImage（项目或lib导入均可，提供lib方式zip，下载后导入项目即可）

4. 选择要运行的 target , 选中 **Build Phases** 项，依次添加所需依赖库

 ```objective-c
CoreMedia.framework
CoreVideo.framework
OpenGLES.framework
AVFoundation.framework
QuartzCore.framework

CoreFoundation.framework
QuartzCore.framework
AssetsLibrary.framework
ImageIO.framework
Accelerate.framework
MobileCoreServices.framework
libz.tbd
 ```



#### 授权摄像头和麦克风使用权限

使用 SDK 的功能，需要授权摄像头、麦克风、相册的使用权限。在 App 的 Info.plist 中添加以下三项，分别对应摄像头、麦克风、相册在系统弹出授权对话框时的提示信息。

![image-20210623143810931](https://tva1.sinaimg.cn/large/008i3skNly1grs6yly9jhj31q20gcahi.jpg)



#### 在工程中引入 ARSDK

在项目需要使用的文件里，引入具体的头文件。

 ```objective-c
#import <ARCSDK/ARCSDK.h>
 ```



#### 进入ARSDK并进行企业、密钥、用户的验证

在集成ARSDK前，您会获得两个字符串：一个字符串是企业ID，另一个字符串是密钥Screat。

然后从项目中任何界面进行ARSDK并进行企业、密钥、用户的验证：

 ```objective-c
ARLaunchViewController *ARlauch = [[ARLaunchViewController alloc] init];
ARlauch.companyID = @"companyID";
ARlauch.companyScreat = @"companyScreat";
ARlauch.userID = @"userID";
[self.navigationController pushViewController:ARlauch animated:YES];
 ```



**至此，在进入到AR微课的主页面后，您已集成完毕，可体验本地录制AR课程。**
