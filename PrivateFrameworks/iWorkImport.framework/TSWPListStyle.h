/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSWPListStyle : TSSStyle <TSSPreset> {
}

@property(readonly) NSString * presetKind;

+ (id)additionalBulletStrings;
+ (id)arrayValuedProperties;
+ (id)defaultArrayForProperty:(int)arg1;
+ (id)defaultLabelGeometries;
+ (id)defaultLabelImages;
+ (id)defaultLabelIndents;
+ (int)defaultLabelNumberType;
+ (id)defaultLabelNumberTypes;
+ (id)defaultLabelString;
+ (id)defaultLabelStrings;
+ (id)defaultLabelTieredNumbers;
+ (id)defaultLabelTypes;
+ (id)defaultMissingBulletImage;
+ (id)defaultPropertyMap;
+ (id)defaultStyleWithContext:(id)arg1 type:(int)arg2;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultTextIndents;
+ (bool)defaultTieredNumber;
+ (int)effectiveTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2;
+ (int)firstLabelTypeForPropertyMapping:(id)arg1;
+ (id)harvardStyleWithContext:(id)arg1;
+ (bool)isDefaultMissingBulletImage:(id)arg1;
+ (int)labelTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2;
+ (id)listStyleWithNumberType:(int)arg1 inStyleSheet:(id)arg2 withNumberedPresetStyle:(id)arg3;
+ (id)listStyleWithTextBullet:(id)arg1 inStyleSheet:(id)arg2 withTextBulletPresetStyle:(id)arg3;
+ (id)nameForLanguageSpecificListStyle:(int)arg1;
+ (id)numberedListStyleForPresets:(id)arg1;
+ (id)pDefaultLabelValuesForLabelTypeProperty:(int)arg1;
+ (void)pGetDefaultTextIndentFloats:(double[9])arg1;
+ (id)pLabelTypeArrayForType:(int)arg1;
+ (int)pLabelTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2 includeDegenerateLevels:(bool)arg3;
+ (id)presetStyleDescriptor;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (id)propertyMapForListNumberType:(int)arg1;
+ (id)propertyMapForListTextBullet:(id)arg1;
+ (id)stickyOverrideProperties;
+ (id)textBulletListStyleForPresets:(id)arg1;
+ (id)textInspectorBulletStrings;

- (double)CGFloatValueForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (id)baseStyleForTopicNumbers;
- (id)boxedObjectForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (double)doubleValueForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (int)effectiveTypeForLevel:(unsigned long long)arg1;
- (int)firstLabelType;
- (float)floatValueForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(bool)arg4;
- (int)intValueForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (double)labelIndentForLevel:(unsigned long long)arg1;
- (int)labelTypeForLevel:(unsigned long long)arg1;
- (void)loadFromArchive:(const struct ListStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyleArchive {} *x3; struct RepeatedField<int> { int *x_4_1_1; int x_4_1_2; int x_4_1_3; } x4; struct RepeatedField<float> { float *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; struct RepeatedField<float> { float *x_6_1_1; int x_6_1_2; int x_6_1_3; } x6; struct RepeatedPtrField<TSWP::ListStyleArchive_LabelGeometry> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedField<int> { int *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<TSWP::ListStyleArchive_LabelImage> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; unsigned int x11; boolx12; boolx13; boolx14; struct ShadowArchive {} *x15; struct Color {} *x16; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x17; struct RepeatedField<bool> { bool*x_18_1_1; int x_18_1_2; int x_18_1_3; } x18; int x19; int x20; unsigned int x21[1]; }*)arg1 unarchiver:(id)arg2;
- (id)objectForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (id)overridePropertyMapWithValue:(id)arg1 forProperty:(int)arg2 atParagraphLevels:(id)arg3 withContext:(id)arg4;
- (id)pOverrideArrayWithValue:(id)arg1 forProperty:(int)arg2 atParagraphLevels:(id)arg3 withContext:(id)arg4;
- (id)presetKind;
- (void)saveToArchive:(struct ListStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyleArchive {} *x3; struct RepeatedField<int> { int *x_4_1_1; int x_4_1_2; int x_4_1_3; } x4; struct RepeatedField<float> { float *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; struct RepeatedField<float> { float *x_6_1_1; int x_6_1_2; int x_6_1_3; } x6; struct RepeatedPtrField<TSWP::ListStyleArchive_LabelGeometry> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedField<int> { int *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<TSWP::ListStyleArchive_LabelImage> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; unsigned int x11; boolx12; boolx13; boolx14; struct ShadowArchive {} *x15; struct Color {} *x16; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x17; struct RepeatedField<bool> { bool*x_18_1_1; int x_18_1_2; int x_18_1_3; } x18; int x19; int x20; unsigned int x21[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (double)textIndentForLevel:(unsigned long long)arg1 fontSize:(double)arg2;

@end
