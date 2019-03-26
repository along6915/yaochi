<tr id="module380tr288"><td class="J_newsTitle newsTitle mixNewsTitle" valign="top" style="width: 100%;">
		
		<div class="J_articlePhotoBox articlePhotoBox liebiao " newid="288" newsflag="0">
			[field:array runphp='yes']@me = (empty(@me['litpic']) ? "" : "<a  href='{@me['arcurl']}' class='preview J_articlePicHref articlePicLink2'><img  src='{@me['litpic']}'/></a>"); [/field:array]
	
			 
		</div>
		<div class="mixNewsStyleTitleContainer">
			<div class="J_newsListTopFlag  newsListTopFlag2 ">
				<a class="no-mixNewsStyleTitleTip" href="[field:arcurl/]" target="_blank"></a>
			</div>
			<span class="mixNewsStyleDate fk-newsListDate">[field:pubdate function="GetDateTimeMK(@me)"/]</span>
			<a style="padding-left: 10px;" hidefocus="true" href="[field:arcurl/]" target="_blank" title="" class="J_mixNewsStyleTitle fk-newsListTitle mixNewsStyleTitle  pic-mixNewsStyleTitle" mix="1" ">[field:title/]</a>
			</div>
			<p class="mixNewsStyleSummary fk-newsListSummary  pic-mixNewsStyleSummary ">　[field:description function='cn_substr(Html2text("@me"),200)'/]...</p>


	<div class="J_separatorLine separatorLine g_separator  pic-separatorLine "></div>
	</div>
	</td>
</tr>