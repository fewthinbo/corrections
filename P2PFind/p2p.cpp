in CCI * P2P_MANAGER::Find(const char * c_pszName)
 {
 	TCCIMap::const_iterator it;
 
+	if(false/* false == LC_IsBrazil()*/)
-	if(false == LC_IsBrazil())
 	{
 		it = m_map_pkCCI.find(c_pszName);
 	}
