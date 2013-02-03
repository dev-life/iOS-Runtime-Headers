/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class PTPCameraDeviceManager, NSMutableArray, MSCameraDeviceManager;

@interface ICMasterDeviceBrowser : NSObject {
    NSMutableArray *_browsers;
    NSMutableArray *_devices;
    MSCameraDeviceManager *_msDevManager;
    NSInteger _numberOfBrowsingBrowsers;
    PTPCameraDeviceManager *_ptpDevManager;
}

@property(readonly) NSMutableArray *browsers;
@property(readonly) NSMutableArray *devices;

+ (id)defaultBrowser;
+ (BOOL)exists;

- (void)addBrowser:(id)arg1;
- (NSInteger)addMSCamera:(id)arg1;
- (NSInteger)addPTPCamera:(id)arg1;
- (NSInteger)addRemoveMSCamera;
- (id)browsers;
- (void)dealloc;
- (id)deviceWithDelegate:(id)arg1;
- (id)devices;
- (void)finalize;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)informBrowserDelegateUsingSelector:(SEL)arg1 withObject:(id)arg2;
- (id)init;
- (void)removeBrowser:(id)arg1;
- (void)removeMSCamera:(id)arg1;
- (void)removePTPCamera:(id)arg1;
- (NSInteger)start:(id)arg1;
- (void)stop:(id)arg1;

@end