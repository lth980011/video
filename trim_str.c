void trimStr(char *szStr)
{
    char * szTmpStr =  szStr + strlen(szStr) - 1;
    for(; isspace(*szTmpStr); szTmpStr--)
    {
        *szTmpStr = '\0';
    }
}

