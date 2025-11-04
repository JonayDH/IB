
main = do
    txt <- getContents
    print $ absolute $ read txt
