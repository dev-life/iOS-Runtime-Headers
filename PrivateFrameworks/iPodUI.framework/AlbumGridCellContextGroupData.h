/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSString;

@interface AlbumGridCellContextGroupData : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    unsigned int _albumCount;
    } _stringSize;
    unsigned int _trackCount;
}

@property(readonly) NSString * countString;
@property struct CGSize { float x1; float x2; } countStringSize;

- (id)countString;
- (struct CGSize { float x1; float x2; })countStringSize;
- (id)initWithQuery:(id)arg1 entityIndex:(unsigned int)arg2;
- (void)setCountStringSize:(struct CGSize { float x1; float x2; })arg1;

@end
