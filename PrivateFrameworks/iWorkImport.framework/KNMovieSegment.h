/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSPData;

@interface KNMovieSegment : NSObject {
    TSPData *mMovieData;
    double mStartTime;
}

@property(getter=isEmptySegment,readonly) bool emptySegment;
@property(readonly) TSPData * movieData;
@property(readonly) double startTime;

- (void)dealloc;
- (id)init;
- (id)initEmptySegmentWithStartTime:(double)arg1;
- (id)initWithContext:(id)arg1 archive:(const struct MovieSegmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DataReference {} *x3; double x4; struct Reference {} *x5; int x6; unsigned int x7[1]; }*)arg2 unarchiver:(id)arg3;
- (id)initWithMovieData:(id)arg1 startTime:(double)arg2;
- (bool)isEmptySegment;
- (id)movieData;
- (id)movieSegmentByAddingTimeOffset:(double)arg1;
- (void)saveToArchive:(struct MovieSegmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DataReference {} *x3; double x4; struct Reference {} *x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (double)startTime;

@end
