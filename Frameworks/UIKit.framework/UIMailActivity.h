/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class MFMailComposeViewController;

@interface UIMailActivity : UIActivity {
    MFMailComposeViewController *_mailComposeViewController;
}

@property(retain) MFMailComposeViewController * mailComposeViewController;

- (id)_activityImage;
- (void)_cleanup;
- (void)_setSubject:(id)arg1;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)mailComposeViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setMailComposeViewController:(id)arg1;
- (void)setSubject:(id)arg1;

@end
