//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValue.h"

@interface NSValue (NSValueQGeometryExtensions)
+ (id)valueWithCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (id)valueWithQMapPoint:(CDStruct_c3b9c2ee)arg1;
+ (id)valueWithQMapRect:(CDStruct_02837cd9)arg1;
+ (id)valueWithQMapSize:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)QMapPointValue;
- (CDStruct_02837cd9)QMapRectValue;
- (CDStruct_c3b9c2ee)QMapSizeValue;
- (struct CLLocationCoordinate2D)coordinateValue;
@end
