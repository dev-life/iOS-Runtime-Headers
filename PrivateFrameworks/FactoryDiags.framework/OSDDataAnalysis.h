/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

@interface OSDDataAnalysis : NSObject {
}

+ (void)initialize;
+ (id)sharedInstance;

- (double)average:(double*)arg1 size:(unsigned int)arg2;
- (id)init;
- (double)interpolate:(double)arg1 vx:(double*)arg2 vy:(double*)arg3 size:(unsigned int)arg4;
- (double)stdev:(double*)arg1 size:(unsigned int)arg2;
- (double)variance:(double*)arg1 size:(unsigned int)arg2;

@end
