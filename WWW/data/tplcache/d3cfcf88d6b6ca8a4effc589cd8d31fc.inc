<li class="top"><a href="{dede:field name='typeurl'/}" class="top_link">{dede:field name='typename'/}</a>
    <!--[if gte IE 7]><!-->
        </a>
        <!--<![endif]-->
        <!--[if lte IE 6]><table><tr><td><![endif]-->
        <ul class="sub">
   {dede:channel type='son'}
          <li><a href="[field:typelink/]"><span class="down">[field:typename/]</span></a></li>
   {/dede:channel}
        </ul>
        <!--[if lte IE 6]></td></tr></table></a><![endif]-->
      </li>