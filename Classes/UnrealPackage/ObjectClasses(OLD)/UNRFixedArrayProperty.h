//
//  UNRFixedArrayProperty.h
//  UnrealPackageExporter
//
//  Created by Adalynn Dudney on 9/14/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "UNRProperty.h"

@interface UNRFixedArrayProperty : UNRProperty {
	UNRBase *element;
	int count;
}

@end
