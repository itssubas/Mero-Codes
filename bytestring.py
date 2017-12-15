#strings - sequence of characters; abstract concept, can't be directly stored on disk
#byte string - sequence of bytes; that are directly stored on disk
>>> u='abc'
>>> u.encode('utf-8')
b'abc'
>>> u='बिकास'
>>> u.encode('utf-8')
b'\xe0\xa4\xac\xe0\xa4\xbf\xe0\xa4\x95\xe0\xa4\xbe\xe0\xa4\xb8'
>>> b'\xe0\xa4\xac\xe0\xa4\xbf\xe0\xa4\x95\xe0\xa4\xbe\xe0\xa4\xb8'.decode('utf-8')
'बिकास'
#utf-8 is Unicode Transformation Format, similar to ASCII
#ASCII only available for 0-127 standard characters
#universal encoding techniques like utf-8 is used to encode anykind of characters
