/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICoverFlowLayer : CALayer {
    void *_private;
}

- (unsigned int)_coverAtScreenPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)_notifySelectionDidChange;
- (void)_prefetch:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)_recycleLayer:(int)arg1 to:(int)arg2;
- (void)_requestBatch;
- (void)_requestImageAtIndex:(int)arg1 quality:(unsigned int)arg2;
- (void)_requestImageAtIndex:(int)arg1;
- (void)_setNewSelectedIndex:(int)arg1;
- (void)_setupFlippedCoverLayer:(id)arg1;
- (void)_updateTick;
- (void)benchmarkHeartbeatLongScrub;
- (void)benchmarkHeartbeatScrubAndWait;
- (void)benchmarkHeartbeatShortScrub;
- (BOOL)benchmarkImageManager:(void*)arg1;
- (void)benchmarkImageMode:(int)arg1;
- (BOOL)benchmarkLoadScrub;
- (void)benchmarkLongScrubSpeed:(float)arg1;
- (void)benchmarkMode:(int)arg1;
- (void)benchmarkPerformanceLog:(BOOL)arg1;
- (void)benchmarkSetEnv;
- (void)benchmarkSkipImageLoad:(BOOL)arg1;
- (int)benchmarkTick;
- (void)benchmarkTickMode:(int)arg1;
- (void)benchmarkTightLoop;
- (void)benchmarkTightLoopScrub;
- (void)benchmarkTightLoopTime:(unsigned int)arg1;
- (unsigned int)coverIndexAtPosition:(float)arg1;
- (void)dealloc;
- (void)displayTick;
- (void)dragFlow:(unsigned int)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)flipSelectedCover;
- (unsigned int)indexOfSelectedCover;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 numberOfCovers:(unsigned int)arg2 numberOfPlaceholders:(unsigned int)arg3;
- (unsigned int)numberOfCovers;
- (unsigned int)numberOfPlaceholders;
- (void)selectCoverAtIndex:(unsigned int)arg1;
- (void)selectCoverAtOffset:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedOrientation:(int)arg1 animate:(BOOL)arg2;
- (void)setImage:(void*)arg1 atIndex:(unsigned int)arg2 type:(unsigned int)arg3 imageSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)setImage:(void*)arg1 atIndex:(unsigned int)arg2 type:(unsigned int)arg3;
- (void)setImage:(void*)arg1 atIndex:(unsigned int)arg2;
- (void)setInfoLayer:(id)arg1;
- (void)setPlaceholderImage:(void*)arg1 atPlaceholderIndex:(unsigned int)arg2 imageSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)setPlaceholderImage:(void*)arg1 atPlaceholderIndex:(unsigned int)arg2;
- (void)setPlaceholderIndicesForCovers:(unsigned int*)arg1;
- (void)transition:(unsigned int)arg1 withCoverFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)transitionIn:(float)arg1 fromFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)transitionIn:(float)arg1;
- (void)transitionOut:(float)arg1 toFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)transitionOut:(float)arg1;

@end
