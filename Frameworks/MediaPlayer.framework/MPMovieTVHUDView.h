/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView;

@interface MPMovieTVHUDView : UIView  {
    int _currentState;
    UIImageView *_playbackMode;
}


- (void)animationDidStop:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_changeState;
- (void)setPlaybackState:(int)arg1;
- (void)_fadeOut;

@end