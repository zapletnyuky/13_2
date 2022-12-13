#include "Header.h"
#import <XCTest/XCTest.h>

@interface teest : XCTestCase

@end

@implementation teest

- (void)testLab {
    
    int x = 5;
    int y = 1;
    int result = max(a,b);
    int Number = 5;
    
    XCTAssertEqual(Number, result);
    
}



@end
