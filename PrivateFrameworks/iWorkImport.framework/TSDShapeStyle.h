/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSDShapeStyle : TSSStyle <TSDMixing> {
}

+ (float)defaultFloatValueForProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (void)initialize;
+ (void)loadShapeStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct ShapeStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct FillArchive {} *x3; struct StrokeArchive {} *x4; struct ShadowArchive {} *x5; struct ReflectionArchive {} *x6; float x7; int x8; unsigned int x9[1]; }*)arg2 unarchiver:(id)arg3;
+ (id)p_magicMoveProperties;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (void)saveShapeStylePropertyMap:(id)arg1 toArchive:(struct ShapeStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct FillArchive {} *x3; struct StrokeArchive {} *x4; struct ShadowArchive {} *x5; struct ReflectionArchive {} *x6; float x7; int x8; unsigned int x9[1]; }*)arg2 archiver:(id)arg3;
+ (bool)validateFloatValue:(float*)arg1 forProperty:(int)arg2;

- (const struct ShapeStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyleArchive {} *x3; struct ShapeStylePropertiesArchive {} *x4; unsigned int x5; int x6; unsigned int x7[1]; }*)shapeStyleArchiveFromUnarchiver:(id)arg1;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (void)fixImageFillTechniqueForSwatchOfSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ShapeStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyleArchive {} *x3; struct ShapeStylePropertiesArchive {} *x4; unsigned int x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)saveToArchive:(struct ShapeStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyleArchive {} *x3; struct ShapeStylePropertiesArchive {} *x4; unsigned int x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (bool)wantsHighContrastBackgroundColor;

@end
